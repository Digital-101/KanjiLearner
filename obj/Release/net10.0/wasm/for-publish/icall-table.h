
#define ICALL_TABLE_corlib 1

static int corlib_icall_indexes [] = {
    /* 0 */ 187,
    /* 1 */ 196,
    /* 2 */ 197,
    /* 3 */ 198,
    /* 4 */ 199,
    /* 5 */ 200,
    /* 6 */ 201,
    /* 7 */ 202,
    /* 8 */ 204,
    /* 9 */ 205,
    /* 10 */ 262,
    /* 11 */ 263,
    /* 12 */ 264,
    /* 13 */ 287,
    /* 14 */ 288,
    /* 15 */ 289,
    /* 16 */ 305,
    /* 17 */ 306,
    /* 18 */ 307,
    /* 19 */ 393,
    /* 20 */ 396,
    /* 21 */ 428,
    /* 22 */ 429,
    /* 23 */ 431,
    /* 24 */ 433,
    /* 25 */ 437,
    /* 26 */ 439,
    /* 27 */ 444,
    /* 28 */ 452,
    /* 29 */ 453,
    /* 30 */ 454,
    /* 31 */ 455,
    /* 32 */ 456,
    /* 33 */ 457,
    /* 34 */ 458,
    /* 35 */ 459,
    /* 36 */ 533,
    /* 37 */ 540,
    /* 38 */ 541,
    /* 39 */ 545,
    /* 40 */ 613,
    /* 41 */ 619,
    /* 42 */ 622,
    /* 43 */ 624,
    /* 44 */ 629,
    /* 45 */ 630,
    /* 46 */ 632,
    /* 47 */ 633,
    /* 48 */ 637,
    /* 49 */ 638,
    /* 50 */ 640,
    /* 51 */ 641,
    /* 52 */ 644,
    /* 53 */ 645,
    /* 54 */ 646,
    /* 55 */ 649,
    /* 56 */ 651,
    /* 57 */ 654,
    /* 58 */ 656,
    /* 59 */ 658,
    /* 60 */ 667,
    /* 61 */ 725,
    /* 62 */ 727,
    /* 63 */ 729,
    /* 64 */ 739,
    /* 65 */ 740,
    /* 66 */ 741,
    /* 67 */ 743,
    /* 68 */ 746,
    /* 69 */ 747,
    /* 70 */ 748,
    /* 71 */ 749,
    /* 72 */ 756,
    /* 73 */ 757,
    /* 74 */ 758,
    /* 75 */ 762,
    /* 76 */ 763,
    /* 77 */ 765,
    /* 78 */ 767,
    /* 79 */ 959,
    /* 80 */ 1112,
    /* 81 */ 1113,
    /* 82 */ 6889,
    /* 83 */ 6890,
    /* 84 */ 6892,
    /* 85 */ 6893,
    /* 86 */ 6894,
    /* 87 */ 6895,
    /* 88 */ 6896,
    /* 89 */ 6898,
    /* 90 */ 6899,
    /* 91 */ 6900,
    /* 92 */ 6916,
    /* 93 */ 6918,
    /* 94 */ 6923,
    /* 95 */ 6925,
    /* 96 */ 6927,
    /* 97 */ 6929,
    /* 98 */ 6981,
    /* 99 */ 6982,
    /* 100 */ 6984,
    /* 101 */ 6985,
    /* 102 */ 6986,
    /* 103 */ 6987,
    /* 104 */ 6988,
    /* 105 */ 6990,
    /* 106 */ 6992,
    /* 107 */ 7969,
    /* 108 */ 7973,
    /* 109 */ 7975,
    /* 110 */ 7976,
    /* 111 */ 7977,
    /* 112 */ 7978,
    /* 113 */ 8383,
    /* 114 */ 8384,
    /* 115 */ 8385,
    /* 116 */ 8386,
    /* 117 */ 8403,
    /* 118 */ 8404,
    /* 119 */ 8405,
    /* 120 */ 8449,
    /* 121 */ 8521,
    /* 122 */ 8531,
    /* 123 */ 8532,
    /* 124 */ 8533,
    /* 125 */ 8534,
    /* 126 */ 8535,
    /* 127 */ 8805,
    /* 128 */ 8809,
    /* 129 */ 8810,
    /* 130 */ 8837,
    /* 131 */ 8871,
    /* 132 */ 8878,
    /* 133 */ 8885,
    /* 134 */ 8896,
    /* 135 */ 8899,
    /* 136 */ 8920,
    /* 137 */ 8995,
    /* 138 */ 8997,
    /* 139 */ 9006,
    /* 140 */ 9008,
    /* 141 */ 9009,
    /* 142 */ 9016,
    /* 143 */ 9031,
    /* 144 */ 9051,
    /* 145 */ 9052,
    /* 146 */ 9060,
    /* 147 */ 9062,
    /* 148 */ 9069,
    /* 149 */ 9070,
    /* 150 */ 9073,
    /* 151 */ 9078,
    /* 152 */ 9084,
    /* 153 */ 9085,
    /* 154 */ 9092,
    /* 155 */ 9094,
    /* 156 */ 9106,
    /* 157 */ 9109,
    /* 158 */ 9110,
    /* 159 */ 9111,
    /* 160 */ 9122,
    /* 161 */ 9132,
    /* 162 */ 9138,
    /* 163 */ 9139,
    /* 164 */ 9140,
    /* 165 */ 9142,
    /* 166 */ 9143,
    /* 167 */ 9160,
    /* 168 */ 9162,
    /* 169 */ 9177,
    /* 170 */ 9195,
    /* 171 */ 9222,
    /* 172 */ 9246,
    /* 173 */ 9247,
    /* 174 */ 9715,
    /* 175 */ 9794,
    /* 176 */ 9795,
    /* 177 */ 9947,
    /* 178 */ 9948,
    /* 179 */ 9952,
    /* 180 */ 9955,
    /* 181 */ 10000,
    /* 182 */ 10243,
    /* 183 */ 10244,
    /* 184 */ 10692,
    /* 185 */ 10696,
    /* 186 */ 10706,
    /* 187 */ 10760,
    /* 188 */ 10761,
    /* 189 */ 10762,
    /* 190 */ 10763,
    /* 191 */ 11374,
    /* 192 */ 11395,
    /* 193 */ 11397,
    /* 194 */ 11399
};

void ves_icall_System_Array_InternalCreate (int, int, int, int, int); 
int ves_icall_System_Array_GetCorElementTypeOfElementTypeInternal (int); 
int ves_icall_System_Array_CanChangePrimitive (int, int, int); 
int ves_icall_System_Array_FastCopy (int, int, int, int, int); 
int ves_icall_System_Array_GetLengthInternal_raw (int, int, int); 
int ves_icall_System_Array_GetLowerBoundInternal_raw (int, int, int); 
void ves_icall_System_Array_GetGenericValue_icall (int, int, int); 
void ves_icall_System_Array_GetValueImpl_raw (int, int, int, int); 
void ves_icall_System_Array_SetValueImpl_raw (int, int, int, int); 
void ves_icall_System_Array_SetValueRelaxedImpl_raw (int, int, int, int); 
void ves_icall_System_Runtime_RuntimeImports_ZeroMemory (int, int); 
void ves_icall_System_Runtime_RuntimeImports_Memmove (int, int, int); 
void ves_icall_System_Buffer_BulkMoveWithWriteBarrier (int, int, int, int); 
int ves_icall_System_Delegate_AllocDelegateLike_internal_raw (int, int); 
int ves_icall_System_Delegate_CreateDelegate_internal_raw (int, int, int, int, int); 
int ves_icall_System_Delegate_GetVirtualMethod_internal_raw (int, int); 
void ves_icall_System_Enum_GetEnumValuesAndNames_raw (int, int, int, int); 
int ves_icall_System_Enum_InternalGetCorElementType (int); 
void ves_icall_System_Enum_InternalGetUnderlyingType_raw (int, int, int); 
int ves_icall_System_Environment_get_ProcessorCount (); 
void ves_icall_System_Environment_FailFast_raw (int, int, int, int); 
void ves_icall_System_GC_register_ephemeron_array_raw (int, int); 
int ves_icall_System_GC_get_ephemeron_tombstone_raw (int); 
void ves_icall_System_GC_SuppressFinalize_raw (int, int); 
void ves_icall_System_GC_ReRegisterForFinalize_raw (int, int); 
void ves_icall_System_GC_GetGCMemoryInfo (int, int, int, int, int, int); 
int ves_icall_System_GC_AllocPinnedArray_raw (int, int, int); 
int ves_icall_System_Object_MemberwiseClone_raw (int, int); 
double ves_icall_System_Math_Ceiling (double); 
double ves_icall_System_Math_Cos (double); 
double ves_icall_System_Math_Floor (double); 
double ves_icall_System_Math_Pow (double, double); 
double ves_icall_System_Math_Sin (double); 
double ves_icall_System_Math_Sqrt (double); 
double ves_icall_System_Math_Tan (double); 
double ves_icall_System_Math_ModF (double, int); 
int ves_icall_RuntimeMethodHandle_GetFunctionPointer_raw (int, int); 
void ves_icall_RuntimeMethodHandle_ReboxFromNullable_raw (int, int, int); 
void ves_icall_RuntimeMethodHandle_ReboxToNullable_raw (int, int, int, int); 
void ves_icall_RuntimeType_GetParentType_raw (int, int, int); 
int ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw (int, int, int); 
void ves_icall_RuntimeType_make_array_type_raw (int, int, int, int); 
void ves_icall_RuntimeType_make_byref_type_raw (int, int, int); 
void ves_icall_RuntimeType_make_pointer_type_raw (int, int, int); 
void ves_icall_RuntimeType_MakeGenericType_raw (int, int, int, int); 
int ves_icall_RuntimeType_GetMethodsByName_native_raw (int, int, int, int, int); 
int ves_icall_RuntimeType_GetPropertiesByName_native_raw (int, int, int, int, int); 
int ves_icall_RuntimeType_GetConstructors_native_raw (int, int, int); 
int ves_icall_System_RuntimeType_CreateInstanceInternal_raw (int, int); 
void ves_icall_RuntimeType_GetDeclaringMethod_raw (int, int, int); 
void ves_icall_System_RuntimeType_getFullName_raw (int, int, int, int, int); 
void ves_icall_RuntimeType_GetGenericArgumentsInternal_raw (int, int, int, int); 
int ves_icall_RuntimeType_GetGenericParameterPosition (int); 
int ves_icall_RuntimeType_GetEvents_native_raw (int, int, int, int); 
int ves_icall_RuntimeType_GetFields_native_raw (int, int, int, int, int); 
void ves_icall_RuntimeType_GetInterfaces_raw (int, int, int); 
int ves_icall_RuntimeType_GetNestedTypes_native_raw (int, int, int, int, int); 
void ves_icall_RuntimeType_GetDeclaringType_raw (int, int, int); 
void ves_icall_RuntimeType_GetName_raw (int, int, int); 
void ves_icall_RuntimeType_GetNamespace_raw (int, int, int); 
int ves_icall_RuntimeType_FunctionPointerReturnAndParameterTypes_raw (int, int); 
int ves_icall_RuntimeTypeHandle_GetAttributes (int); 
int ves_icall_RuntimeTypeHandle_GetMetadataToken_raw (int, int); 
void ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw (int, int, int); 
int ves_icall_RuntimeTypeHandle_GetCorElementType (int); 
int ves_icall_RuntimeTypeHandle_HasInstantiation (int); 
int ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw (int, int, int); 
int ves_icall_RuntimeTypeHandle_HasReferences_raw (int, int); 
int ves_icall_RuntimeTypeHandle_GetArrayRank_raw (int, int); 
void ves_icall_RuntimeTypeHandle_GetAssembly_raw (int, int, int); 
void ves_icall_RuntimeTypeHandle_GetElementType_raw (int, int, int); 
void ves_icall_RuntimeTypeHandle_GetModule_raw (int, int, int); 
int ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw (int, int, int); 
int ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition (int); 
int ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw (int, int); 
int ves_icall_RuntimeTypeHandle_is_subclass_of_raw (int, int, int); 
int ves_icall_RuntimeTypeHandle_IsByRefLike_raw (int, int); 
void ves_icall_System_RuntimeTypeHandle_internal_from_name_raw (int, int, int, int, int, int); 
int ves_icall_System_String_FastAllocateString_raw (int, int); 
int ves_icall_System_Type_internal_from_handle_raw (int, int); 
int ves_icall_System_ValueType_InternalGetHashCode_raw (int, int, int); 
int ves_icall_System_ValueType_Equals_raw (int, int, int, int); 
int ves_icall_System_Threading_Interlocked_CompareExchange_Int (int, int, int); 
void ves_icall_System_Threading_Interlocked_CompareExchange_Object (int, int, int, int); 
int ves_icall_System_Threading_Interlocked_Decrement_Int (int); 
int ves_icall_System_Threading_Interlocked_Increment_Int (int); 
int64_t ves_icall_System_Threading_Interlocked_Increment_Long (int); 
int ves_icall_System_Threading_Interlocked_Exchange_Int (int, int); 
void ves_icall_System_Threading_Interlocked_Exchange_Object (int, int, int); 
int64_t ves_icall_System_Threading_Interlocked_CompareExchange_Long (int, int64_t, int64_t); 
int64_t ves_icall_System_Threading_Interlocked_Exchange_Long (int, int64_t); 
int ves_icall_System_Threading_Interlocked_Add_Int (int, int); 
void ves_icall_System_Threading_Monitor_Monitor_Enter_raw (int, int); 
void mono_monitor_exit_icall_raw (int, int); 
void ves_icall_System_Threading_Monitor_Monitor_pulse_raw (int, int); 
void ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw (int, int); 
int ves_icall_System_Threading_Monitor_Monitor_wait_raw (int, int, int, int); 
void ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw (int, int, int, int, int); 
void ves_icall_System_Threading_Thread_InitInternal_raw (int, int); 
int ves_icall_System_Threading_Thread_GetCurrentThread (); 
void ves_icall_System_Threading_InternalThread_Thread_free_internal_raw (int, int); 
int ves_icall_System_Threading_Thread_GetState_raw (int, int); 
void ves_icall_System_Threading_Thread_SetState_raw (int, int, int); 
void ves_icall_System_Threading_Thread_ClrState_raw (int, int, int); 
void ves_icall_System_Threading_Thread_SetName_icall_raw (int, int, int, int); 
int ves_icall_System_Threading_Thread_YieldInternal (); 
void ves_icall_System_Threading_Thread_SetPriority_raw (int, int, int); 
void ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw (int, int, int); 
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw (int, int); 
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw (int, int, int, int); 
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw (int, int, int, int, int); 
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw (int, int, int, int, int, int); 
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw (int); 
int ves_icall_System_GCHandle_InternalAlloc_raw (int, int, int); 
void ves_icall_System_GCHandle_InternalFree_raw (int, int); 
int ves_icall_System_GCHandle_InternalGet_raw (int, int); 
void ves_icall_System_GCHandle_InternalSet_raw (int, int, int); 
int ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError (); 
void ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError (int); 
void ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw (int, int, int, int); 
int ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw (int, int, int, int, int, int); 
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalGetHashCode_raw (int, int); 
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw (int, int); 
void ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw (int, int, int); 
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetSpanDataFrom_raw (int, int, int, int); 
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack (); 
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalBox_raw (int, int, int); 
int ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw (int); 
int ves_icall_System_Reflection_Assembly_InternalLoad_raw (int, int, int, int); 
int ves_icall_System_Reflection_Assembly_InternalGetType_raw (int, int, int, int, int, int); 
int ves_icall_System_Reflection_AssemblyName_GetNativeName (int); 
int ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw (int, int, int, int); 
int ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw (int, int); 
int ves_icall_MonoCustomAttrs_IsDefinedInternal_raw (int, int, int); 
int ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw (int, int, int); 
int ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw (int, int); 
int ves_icall_System_Reflection_LoaderAllocatorScout_Destroy (int); 
void ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw (int, int, int); 
void ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw (int, int, int); 
void ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw (int, int, int, int); 
int ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw (int, int, int, int, int); 
void ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw (int, int, int); 
void ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw (int, int, int, int, int, int, int); 
void ves_icall_RuntimeEventInfo_get_event_info_raw (int, int, int); 
int ves_icall_reflection_get_token_raw (int, int); 
int ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw (int, int, int); 
int ves_icall_RuntimeFieldInfo_ResolveType_raw (int, int); 
int ves_icall_RuntimeFieldInfo_GetParentType_raw (int, int, int); 
int ves_icall_RuntimeFieldInfo_GetFieldOffset_raw (int, int); 
int ves_icall_RuntimeFieldInfo_GetValueInternal_raw (int, int, int); 
int ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw (int, int); 
int ves_icall_reflection_get_token_raw (int, int); 
void ves_icall_get_method_info_raw (int, int, int); 
int ves_icall_get_method_attributes (int); 
int ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw (int, int, int); 
int ves_icall_System_MonoMethodInfo_get_retval_marshal_raw (int, int); 
int ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw (int, int, int, int); 
int ves_icall_RuntimeMethodInfo_get_name_raw (int, int); 
int ves_icall_RuntimeMethodInfo_get_base_method_raw (int, int, int); 
int ves_icall_reflection_get_token_raw (int, int); 
int ves_icall_InternalInvoke_raw (int, int, int, int, int); 
void ves_icall_RuntimeMethodInfo_GetPInvoke_raw (int, int, int, int, int); 
int ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw (int, int, int); 
int ves_icall_RuntimeMethodInfo_GetGenericArguments_raw (int, int); 
int ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw (int, int); 
int ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw (int, int); 
int ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw (int, int); 
void ves_icall_InvokeClassConstructor_raw (int, int); 
int ves_icall_InternalInvoke_raw (int, int, int, int, int); 
int ves_icall_reflection_get_token_raw (int, int); 
int ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw (int, int, int, int, int, int); 
void ves_icall_RuntimePropertyInfo_get_property_info_raw (int, int, int, int); 
int ves_icall_reflection_get_token_raw (int, int); 
int ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw (int, int, int); 
void ves_icall_DynamicMethod_create_dynamic_method_raw (int, int, int, int, int); 
void ves_icall_AssemblyBuilder_basic_init_raw (int, int); 
void ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw (int, int); 
void ves_icall_ModuleBuilder_basic_init_raw (int, int); 
void ves_icall_ModuleBuilder_set_wrappers_type_raw (int, int, int); 
int ves_icall_ModuleBuilder_getToken_raw (int, int, int, int); 
void ves_icall_ModuleBuilder_RegisterToken_raw (int, int, int, int); 
int ves_icall_TypeBuilder_create_runtime_class_raw (int, int); 
int ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw (int, int); 
int ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw (int, int); 
int ves_icall_System_Diagnostics_Debugger_IsAttached_internal (); 
int ves_icall_System_Diagnostics_StackFrame_GetFrameInfo (int, int, int, int, int, int, int, int); 
void ves_icall_System_Diagnostics_StackTrace_GetTrace (int, int, int, int); 
void ves_icall_System_Diagnostics_Tracing_NativeRuntimeEventSource_LogContentionStart (int, int, int, int, uint64_t); 
void ves_icall_System_Diagnostics_Tracing_NativeRuntimeEventSource_LogContentionStop (int, int, double); 
void ves_icall_System_Diagnostics_Tracing_NativeRuntimeEventSource_LogWaitHandleWaitStart (int, int, int); 
void ves_icall_System_Diagnostics_Tracing_NativeRuntimeEventSource_LogWaitHandleWaitStop (int); 
int ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass (int); 
void ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree (int); 
int ves_icall_Mono_SafeStringMarshal_StringToUtf8 (int); 
void ves_icall_Mono_SafeStringMarshal_GFree (int);

static void *corlib_icall_funcs [] = {
    /* 0:187 */ ves_icall_System_Array_InternalCreate,
    /* 1:196 */ ves_icall_System_Array_GetCorElementTypeOfElementTypeInternal,
    /* 2:197 */ ves_icall_System_Array_CanChangePrimitive,
    /* 3:198 */ ves_icall_System_Array_FastCopy,
    /* 4:199 */ ves_icall_System_Array_GetLengthInternal_raw,
    /* 5:200 */ ves_icall_System_Array_GetLowerBoundInternal_raw,
    /* 6:201 */ ves_icall_System_Array_GetGenericValue_icall,
    /* 7:202 */ ves_icall_System_Array_GetValueImpl_raw,
    /* 8:204 */ ves_icall_System_Array_SetValueImpl_raw,
    /* 9:205 */ ves_icall_System_Array_SetValueRelaxedImpl_raw,
    /* 10:262 */ ves_icall_System_Runtime_RuntimeImports_ZeroMemory,
    /* 11:263 */ ves_icall_System_Runtime_RuntimeImports_Memmove,
    /* 12:264 */ ves_icall_System_Buffer_BulkMoveWithWriteBarrier,
    /* 13:287 */ ves_icall_System_Delegate_AllocDelegateLike_internal_raw,
    /* 14:288 */ ves_icall_System_Delegate_CreateDelegate_internal_raw,
    /* 15:289 */ ves_icall_System_Delegate_GetVirtualMethod_internal_raw,
    /* 16:305 */ ves_icall_System_Enum_GetEnumValuesAndNames_raw,
    /* 17:306 */ ves_icall_System_Enum_InternalGetCorElementType,
    /* 18:307 */ ves_icall_System_Enum_InternalGetUnderlyingType_raw,
    /* 19:393 */ ves_icall_System_Environment_get_ProcessorCount,
    /* 20:396 */ ves_icall_System_Environment_FailFast_raw,
    /* 21:428 */ ves_icall_System_GC_register_ephemeron_array_raw,
    /* 22:429 */ ves_icall_System_GC_get_ephemeron_tombstone_raw,
    /* 23:431 */ ves_icall_System_GC_SuppressFinalize_raw,
    /* 24:433 */ ves_icall_System_GC_ReRegisterForFinalize_raw,
    /* 25:437 */ ves_icall_System_GC_GetGCMemoryInfo,
    /* 26:439 */ ves_icall_System_GC_AllocPinnedArray_raw,
    /* 27:444 */ ves_icall_System_Object_MemberwiseClone_raw,
    /* 28:452 */ ves_icall_System_Math_Ceiling,
    /* 29:453 */ ves_icall_System_Math_Cos,
    /* 30:454 */ ves_icall_System_Math_Floor,
    /* 31:455 */ ves_icall_System_Math_Pow,
    /* 32:456 */ ves_icall_System_Math_Sin,
    /* 33:457 */ ves_icall_System_Math_Sqrt,
    /* 34:458 */ ves_icall_System_Math_Tan,
    /* 35:459 */ ves_icall_System_Math_ModF,
    /* 36:533 */ ves_icall_RuntimeMethodHandle_GetFunctionPointer_raw,
    /* 37:540 */ ves_icall_RuntimeMethodHandle_ReboxFromNullable_raw,
    /* 38:541 */ ves_icall_RuntimeMethodHandle_ReboxToNullable_raw,
    /* 39:545 */ ves_icall_RuntimeType_GetParentType_raw,
    /* 40:613 */ ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
    /* 41:619 */ ves_icall_RuntimeType_make_array_type_raw,
    /* 42:622 */ ves_icall_RuntimeType_make_byref_type_raw,
    /* 43:624 */ ves_icall_RuntimeType_make_pointer_type_raw,
    /* 44:629 */ ves_icall_RuntimeType_MakeGenericType_raw,
    /* 45:630 */ ves_icall_RuntimeType_GetMethodsByName_native_raw,
    /* 46:632 */ ves_icall_RuntimeType_GetPropertiesByName_native_raw,
    /* 47:633 */ ves_icall_RuntimeType_GetConstructors_native_raw,
    /* 48:637 */ ves_icall_System_RuntimeType_CreateInstanceInternal_raw,
    /* 49:638 */ ves_icall_RuntimeType_GetDeclaringMethod_raw,
    /* 50:640 */ ves_icall_System_RuntimeType_getFullName_raw,
    /* 51:641 */ ves_icall_RuntimeType_GetGenericArgumentsInternal_raw,
    /* 52:644 */ ves_icall_RuntimeType_GetGenericParameterPosition,
    /* 53:645 */ ves_icall_RuntimeType_GetEvents_native_raw,
    /* 54:646 */ ves_icall_RuntimeType_GetFields_native_raw,
    /* 55:649 */ ves_icall_RuntimeType_GetInterfaces_raw,
    /* 56:651 */ ves_icall_RuntimeType_GetNestedTypes_native_raw,
    /* 57:654 */ ves_icall_RuntimeType_GetDeclaringType_raw,
    /* 58:656 */ ves_icall_RuntimeType_GetName_raw,
    /* 59:658 */ ves_icall_RuntimeType_GetNamespace_raw,
    /* 60:667 */ ves_icall_RuntimeType_FunctionPointerReturnAndParameterTypes_raw,
    /* 61:725 */ ves_icall_RuntimeTypeHandle_GetAttributes,
    /* 62:727 */ ves_icall_RuntimeTypeHandle_GetMetadataToken_raw,
    /* 63:729 */ ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw,
    /* 64:739 */ ves_icall_RuntimeTypeHandle_GetCorElementType,
    /* 65:740 */ ves_icall_RuntimeTypeHandle_HasInstantiation,
    /* 66:741 */ ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw,
    /* 67:743 */ ves_icall_RuntimeTypeHandle_HasReferences_raw,
    /* 68:746 */ ves_icall_RuntimeTypeHandle_GetArrayRank_raw,
    /* 69:747 */ ves_icall_RuntimeTypeHandle_GetAssembly_raw,
    /* 70:748 */ ves_icall_RuntimeTypeHandle_GetElementType_raw,
    /* 71:749 */ ves_icall_RuntimeTypeHandle_GetModule_raw,
    /* 72:756 */ ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw,
    /* 73:757 */ ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition,
    /* 74:758 */ ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw,
    /* 75:762 */ ves_icall_RuntimeTypeHandle_is_subclass_of_raw,
    /* 76:763 */ ves_icall_RuntimeTypeHandle_IsByRefLike_raw,
    /* 77:765 */ ves_icall_System_RuntimeTypeHandle_internal_from_name_raw,
    /* 78:767 */ ves_icall_System_String_FastAllocateString_raw,
    /* 79:959 */ ves_icall_System_Type_internal_from_handle_raw,
    /* 80:1112 */ ves_icall_System_ValueType_InternalGetHashCode_raw,
    /* 81:1113 */ ves_icall_System_ValueType_Equals_raw,
    /* 82:6889 */ ves_icall_System_Threading_Interlocked_CompareExchange_Int,
    /* 83:6890 */ ves_icall_System_Threading_Interlocked_CompareExchange_Object,
    /* 84:6892 */ ves_icall_System_Threading_Interlocked_Decrement_Int,
    /* 85:6893 */ ves_icall_System_Threading_Interlocked_Increment_Int,
    /* 86:6894 */ ves_icall_System_Threading_Interlocked_Increment_Long,
    /* 87:6895 */ ves_icall_System_Threading_Interlocked_Exchange_Int,
    /* 88:6896 */ ves_icall_System_Threading_Interlocked_Exchange_Object,
    /* 89:6898 */ ves_icall_System_Threading_Interlocked_CompareExchange_Long,
    /* 90:6899 */ ves_icall_System_Threading_Interlocked_Exchange_Long,
    /* 91:6900 */ ves_icall_System_Threading_Interlocked_Add_Int,
    /* 92:6916 */ ves_icall_System_Threading_Monitor_Monitor_Enter_raw,
    /* 93:6918 */ mono_monitor_exit_icall_raw,
    /* 94:6923 */ ves_icall_System_Threading_Monitor_Monitor_pulse_raw,
    /* 95:6925 */ ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw,
    /* 96:6927 */ ves_icall_System_Threading_Monitor_Monitor_wait_raw,
    /* 97:6929 */ ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw,
    /* 98:6981 */ ves_icall_System_Threading_Thread_InitInternal_raw,
    /* 99:6982 */ ves_icall_System_Threading_Thread_GetCurrentThread,
    /* 100:6984 */ ves_icall_System_Threading_InternalThread_Thread_free_internal_raw,
    /* 101:6985 */ ves_icall_System_Threading_Thread_GetState_raw,
    /* 102:6986 */ ves_icall_System_Threading_Thread_SetState_raw,
    /* 103:6987 */ ves_icall_System_Threading_Thread_ClrState_raw,
    /* 104:6988 */ ves_icall_System_Threading_Thread_SetName_icall_raw,
    /* 105:6990 */ ves_icall_System_Threading_Thread_YieldInternal,
    /* 106:6992 */ ves_icall_System_Threading_Thread_SetPriority_raw,
    /* 107:7969 */ ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw,
    /* 108:7973 */ ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw,
    /* 109:7975 */ ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw,
    /* 110:7976 */ ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw,
    /* 111:7977 */ ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw,
    /* 112:7978 */ ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw,
    /* 113:8383 */ ves_icall_System_GCHandle_InternalAlloc_raw,
    /* 114:8384 */ ves_icall_System_GCHandle_InternalFree_raw,
    /* 115:8385 */ ves_icall_System_GCHandle_InternalGet_raw,
    /* 116:8386 */ ves_icall_System_GCHandle_InternalSet_raw,
    /* 117:8403 */ ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError,
    /* 118:8404 */ ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError,
    /* 119:8405 */ ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw,
    /* 120:8449 */ ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw,
    /* 121:8521 */ ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalGetHashCode_raw,
    /* 122:8531 */ ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw,
    /* 123:8532 */ ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw,
    /* 124:8533 */ ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetSpanDataFrom_raw,
    /* 125:8534 */ ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack,
    /* 126:8535 */ ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalBox_raw,
    /* 127:8805 */ ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw,
    /* 128:8809 */ ves_icall_System_Reflection_Assembly_InternalLoad_raw,
    /* 129:8810 */ ves_icall_System_Reflection_Assembly_InternalGetType_raw,
    /* 130:8837 */ ves_icall_System_Reflection_AssemblyName_GetNativeName,
    /* 131:8871 */ ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw,
    /* 132:8878 */ ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw,
    /* 133:8885 */ ves_icall_MonoCustomAttrs_IsDefinedInternal_raw,
    /* 134:8896 */ ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw,
    /* 135:8899 */ ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw,
    /* 136:8920 */ ves_icall_System_Reflection_LoaderAllocatorScout_Destroy,
    /* 137:8995 */ ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw,
    /* 138:8997 */ ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw,
    /* 139:9006 */ ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw,
    /* 140:9008 */ ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw,
    /* 141:9009 */ ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw,
    /* 142:9016 */ ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw,
    /* 143:9031 */ ves_icall_RuntimeEventInfo_get_event_info_raw,
    /* 144:9051 */ ves_icall_reflection_get_token_raw,
    /* 145:9052 */ ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw,
    /* 146:9060 */ ves_icall_RuntimeFieldInfo_ResolveType_raw,
    /* 147:9062 */ ves_icall_RuntimeFieldInfo_GetParentType_raw,
    /* 148:9069 */ ves_icall_RuntimeFieldInfo_GetFieldOffset_raw,
    /* 149:9070 */ ves_icall_RuntimeFieldInfo_GetValueInternal_raw,
    /* 150:9073 */ ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw,
    /* 151:9078 */ ves_icall_reflection_get_token_raw,
    /* 152:9084 */ ves_icall_get_method_info_raw,
    /* 153:9085 */ ves_icall_get_method_attributes,
    /* 154:9092 */ ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw,
    /* 155:9094 */ ves_icall_System_MonoMethodInfo_get_retval_marshal_raw,
    /* 156:9106 */ ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw,
    /* 157:9109 */ ves_icall_RuntimeMethodInfo_get_name_raw,
    /* 158:9110 */ ves_icall_RuntimeMethodInfo_get_base_method_raw,
    /* 159:9111 */ ves_icall_reflection_get_token_raw,
    /* 160:9122 */ ves_icall_InternalInvoke_raw,
    /* 161:9132 */ ves_icall_RuntimeMethodInfo_GetPInvoke_raw,
    /* 162:9138 */ ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw,
    /* 163:9139 */ ves_icall_RuntimeMethodInfo_GetGenericArguments_raw,
    /* 164:9140 */ ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw,
    /* 165:9142 */ ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw,
    /* 166:9143 */ ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw,
    /* 167:9160 */ ves_icall_InvokeClassConstructor_raw,
    /* 168:9162 */ ves_icall_InternalInvoke_raw,
    /* 169:9177 */ ves_icall_reflection_get_token_raw,
    /* 170:9195 */ ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw,
    /* 171:9222 */ ves_icall_RuntimePropertyInfo_get_property_info_raw,
    /* 172:9246 */ ves_icall_reflection_get_token_raw,
    /* 173:9247 */ ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw,
    /* 174:9715 */ ves_icall_DynamicMethod_create_dynamic_method_raw,
    /* 175:9794 */ ves_icall_AssemblyBuilder_basic_init_raw,
    /* 176:9795 */ ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw,
    /* 177:9947 */ ves_icall_ModuleBuilder_basic_init_raw,
    /* 178:9948 */ ves_icall_ModuleBuilder_set_wrappers_type_raw,
    /* 179:9952 */ ves_icall_ModuleBuilder_getToken_raw,
    /* 180:9955 */ ves_icall_ModuleBuilder_RegisterToken_raw,
    /* 181:10000 */ ves_icall_TypeBuilder_create_runtime_class_raw,
    /* 182:10243 */ ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw,
    /* 183:10244 */ ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw,
    /* 184:10692 */ ves_icall_System_Diagnostics_Debugger_IsAttached_internal,
    /* 185:10696 */ ves_icall_System_Diagnostics_StackFrame_GetFrameInfo,
    /* 186:10706 */ ves_icall_System_Diagnostics_StackTrace_GetTrace,
    /* 187:10760 */ ves_icall_System_Diagnostics_Tracing_NativeRuntimeEventSource_LogContentionStart,
    /* 188:10761 */ ves_icall_System_Diagnostics_Tracing_NativeRuntimeEventSource_LogContentionStop,
    /* 189:10762 */ ves_icall_System_Diagnostics_Tracing_NativeRuntimeEventSource_LogWaitHandleWaitStart,
    /* 190:10763 */ ves_icall_System_Diagnostics_Tracing_NativeRuntimeEventSource_LogWaitHandleWaitStop,
    /* 191:11374 */ ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass,
    /* 192:11395 */ ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree,
    /* 193:11397 */ ves_icall_Mono_SafeStringMarshal_StringToUtf8,
    /* 194:11399 */ ves_icall_Mono_SafeStringMarshal_GFree
};

static uint8_t corlib_icall_flags [] = {
    /* 0:187 */ 0,
    /* 1:196 */ 0,
    /* 2:197 */ 0,
    /* 3:198 */ 0,
    /* 4:199 */ 4,
    /* 5:200 */ 4,
    /* 6:201 */ 0,
    /* 7:202 */ 4,
    /* 8:204 */ 4,
    /* 9:205 */ 4,
    /* 10:262 */ 0,
    /* 11:263 */ 0,
    /* 12:264 */ 0,
    /* 13:287 */ 4,
    /* 14:288 */ 4,
    /* 15:289 */ 4,
    /* 16:305 */ 4,
    /* 17:306 */ 0,
    /* 18:307 */ 4,
    /* 19:393 */ 0,
    /* 20:396 */ 4,
    /* 21:428 */ 4,
    /* 22:429 */ 4,
    /* 23:431 */ 4,
    /* 24:433 */ 4,
    /* 25:437 */ 0,
    /* 26:439 */ 4,
    /* 27:444 */ 4,
    /* 28:452 */ 0,
    /* 29:453 */ 0,
    /* 30:454 */ 0,
    /* 31:455 */ 0,
    /* 32:456 */ 0,
    /* 33:457 */ 0,
    /* 34:458 */ 0,
    /* 35:459 */ 0,
    /* 36:533 */ 4,
    /* 37:540 */ 4,
    /* 38:541 */ 4,
    /* 39:545 */ 4,
    /* 40:613 */ 4,
    /* 41:619 */ 4,
    /* 42:622 */ 4,
    /* 43:624 */ 4,
    /* 44:629 */ 4,
    /* 45:630 */ 4,
    /* 46:632 */ 4,
    /* 47:633 */ 4,
    /* 48:637 */ 4,
    /* 49:638 */ 4,
    /* 50:640 */ 4,
    /* 51:641 */ 4,
    /* 52:644 */ 0,
    /* 53:645 */ 4,
    /* 54:646 */ 4,
    /* 55:649 */ 4,
    /* 56:651 */ 4,
    /* 57:654 */ 4,
    /* 58:656 */ 4,
    /* 59:658 */ 4,
    /* 60:667 */ 4,
    /* 61:725 */ 0,
    /* 62:727 */ 4,
    /* 63:729 */ 4,
    /* 64:739 */ 0,
    /* 65:740 */ 0,
    /* 66:741 */ 4,
    /* 67:743 */ 4,
    /* 68:746 */ 4,
    /* 69:747 */ 4,
    /* 70:748 */ 4,
    /* 71:749 */ 4,
    /* 72:756 */ 4,
    /* 73:757 */ 0,
    /* 74:758 */ 4,
    /* 75:762 */ 4,
    /* 76:763 */ 4,
    /* 77:765 */ 4,
    /* 78:767 */ 4,
    /* 79:959 */ 4,
    /* 80:1112 */ 4,
    /* 81:1113 */ 4,
    /* 82:6889 */ 0,
    /* 83:6890 */ 0,
    /* 84:6892 */ 0,
    /* 85:6893 */ 0,
    /* 86:6894 */ 0,
    /* 87:6895 */ 0,
    /* 88:6896 */ 0,
    /* 89:6898 */ 0,
    /* 90:6899 */ 0,
    /* 91:6900 */ 0,
    /* 92:6916 */ 4,
    /* 93:6918 */ 4,
    /* 94:6923 */ 4,
    /* 95:6925 */ 4,
    /* 96:6927 */ 4,
    /* 97:6929 */ 4,
    /* 98:6981 */ 4,
    /* 99:6982 */ 0,
    /* 100:6984 */ 4,
    /* 101:6985 */ 4,
    /* 102:6986 */ 4,
    /* 103:6987 */ 4,
    /* 104:6988 */ 4,
    /* 105:6990 */ 0,
    /* 106:6992 */ 4,
    /* 107:7969 */ 4,
    /* 108:7973 */ 4,
    /* 109:7975 */ 4,
    /* 110:7976 */ 4,
    /* 111:7977 */ 4,
    /* 112:7978 */ 4,
    /* 113:8383 */ 4,
    /* 114:8384 */ 4,
    /* 115:8385 */ 4,
    /* 116:8386 */ 4,
    /* 117:8403 */ 0,
    /* 118:8404 */ 0,
    /* 119:8405 */ 4,
    /* 120:8449 */ 4,
    /* 121:8521 */ 4,
    /* 122:8531 */ 4,
    /* 123:8532 */ 4,
    /* 124:8533 */ 4,
    /* 125:8534 */ 0,
    /* 126:8535 */ 4,
    /* 127:8805 */ 4,
    /* 128:8809 */ 4,
    /* 129:8810 */ 4,
    /* 130:8837 */ 0,
    /* 131:8871 */ 4,
    /* 132:8878 */ 4,
    /* 133:8885 */ 4,
    /* 134:8896 */ 4,
    /* 135:8899 */ 4,
    /* 136:8920 */ 0,
    /* 137:8995 */ 4,
    /* 138:8997 */ 4,
    /* 139:9006 */ 4,
    /* 140:9008 */ 4,
    /* 141:9009 */ 4,
    /* 142:9016 */ 4,
    /* 143:9031 */ 4,
    /* 144:9051 */ 4,
    /* 145:9052 */ 4,
    /* 146:9060 */ 4,
    /* 147:9062 */ 4,
    /* 148:9069 */ 4,
    /* 149:9070 */ 4,
    /* 150:9073 */ 4,
    /* 151:9078 */ 4,
    /* 152:9084 */ 4,
    /* 153:9085 */ 0,
    /* 154:9092 */ 4,
    /* 155:9094 */ 4,
    /* 156:9106 */ 4,
    /* 157:9109 */ 4,
    /* 158:9110 */ 4,
    /* 159:9111 */ 4,
    /* 160:9122 */ 4,
    /* 161:9132 */ 4,
    /* 162:9138 */ 4,
    /* 163:9139 */ 4,
    /* 164:9140 */ 4,
    /* 165:9142 */ 4,
    /* 166:9143 */ 4,
    /* 167:9160 */ 4,
    /* 168:9162 */ 4,
    /* 169:9177 */ 4,
    /* 170:9195 */ 4,
    /* 171:9222 */ 4,
    /* 172:9246 */ 4,
    /* 173:9247 */ 4,
    /* 174:9715 */ 4,
    /* 175:9794 */ 4,
    /* 176:9795 */ 4,
    /* 177:9947 */ 4,
    /* 178:9948 */ 4,
    /* 179:9952 */ 4,
    /* 180:9955 */ 4,
    /* 181:10000 */ 4,
    /* 182:10243 */ 4,
    /* 183:10244 */ 4,
    /* 184:10692 */ 0,
    /* 185:10696 */ 0,
    /* 186:10706 */ 0,
    /* 187:10760 */ 0,
    /* 188:10761 */ 0,
    /* 189:10762 */ 0,
    /* 190:10763 */ 0,
    /* 191:11374 */ 0,
    /* 192:11395 */ 0,
    /* 193:11397 */ 0,
    /* 194:11399 */ 0
};
