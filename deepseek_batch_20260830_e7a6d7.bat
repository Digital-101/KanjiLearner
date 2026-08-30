@echo off
echo Cleaning...
dotnet clean

echo Restoring packages...
dotnet restore

echo Publishing for production...
dotnet publish -c Release -o publish

echo Deploying to Netlify...
netlify deploy --prod --dir=publish/wwwroot

echo Deployment complete!
pause