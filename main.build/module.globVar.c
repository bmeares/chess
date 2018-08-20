/* Generated code for Python source for module 'globVar'
 * created by Nuitka version 0.5.32.5
 *
 * This code is in part copyright 2018 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "__helpers.h"

/* The _module_globVar is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_globVar;
PyDictObject *moduledict_globVar;

/* The module constants used, if any. */
extern PyObject *const_str_plain_scanning;
static PyObject *const_str_digest_a9ab1b0943babe838f3771a50800a35b;
extern PyObject *const_str_plain_r_w_NumPieces;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_removed;
extern PyObject *const_str_plain_r_b_NumPieces;
extern PyObject *const_str_plain_player;
extern PyObject *const_str_plain_none;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_m_f_p_color;
extern PyObject *const_str_plain_m_f_p_label;
extern PyObject *const_str_plain_m_f_row;
extern PyObject *const_str_plain_b_pieces;
extern PyObject *const_str_plain_Pawn;
extern PyObject *const_str_plain_w_NumPieces;
extern PyObject *const_str_plain_r_b_pieces;
extern PyObject *const_str_plain_p_b_Num;
extern PyObject *const_str_plain_p_w_moves;
extern PyObject *const_str_plain_removed_label;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_r_w_pieces;
extern PyObject *const_str_plain_m_t_p_color;
extern PyObject *const_str_plain_m_t_p_label;
extern PyObject *const_str_plain_Square;
extern PyObject *const_str_plain_playerCount;
extern PyObject *const_str_plain_last_col;
extern PyObject *const_str_plain_m_f_col;
extern PyObject *const_str_plain_b_check;
extern PyObject *const_str_plain_m_f_p_type;
extern PyObject *const_int_neg_1;
extern PyObject *const_str_plain_p_b_moves;
extern PyObject *const_str_plain_w_pieces;
extern PyObject *const_str_plain_b_NumPieces;
extern PyObject *const_str_plain_m_t_p_type;
extern PyObject *const_str_plain_m_t_col;
extern PyObject *const_str_plain_w_check;
extern PyObject *const_str_plain_globVar;
extern PyObject *const_str_plain_r_avail_Num;
extern PyObject *const_str_plain_m_t_ps;
extern PyObject *const_str_plain_r_avail;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_numPlayers;
extern PyObject *const_str_plain_pieces;
static PyObject *const_str_digest_d00f36893e1a7fb3e9b46d33b259de9f;
extern PyObject *const_str_plain_p_w_Num;
extern PyObject *const_str_plain_m_t_row;
extern PyObject *const_str_plain_removed_color;
extern PyObject *const_tuple_str_plain_none_str_plain_none_tuple;
extern PyObject *const_str_empty;
extern PyObject *const_str_plain_m_f_ps;
extern PyObject *const_int_pos_16;
extern PyObject *const_str_plain_square;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_noPlayers;
extern PyObject *const_str_plain_last_row;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_a9ab1b0943babe838f3771a50800a35b = UNSTREAM_STRING( &constant_bin[ 1887 ], 56, 0 );
    const_str_digest_d00f36893e1a7fb3e9b46d33b259de9f = UNSTREAM_STRING( &constant_bin[ 1943 ], 16, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_globVar( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_0faf66ae9653f286ab6cd87612ab474d;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_a9ab1b0943babe838f3771a50800a35b;
    codeobj_0faf66ae9653f286ab6cd87612ab474d = MAKE_CODEOBJ( module_filename_obj, const_str_digest_d00f36893e1a7fb3e9b46d33b259de9f, 1, const_tuple_empty, 0, 0, CO_NOFREE );
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_globVar =
{
    PyModuleDef_HEAD_INIT,
    "globVar",   /* m_name */
    NULL,                /* m_doc */
    -1,                  /* m_size */
    NULL,                /* m_methods */
    NULL,                /* m_reload */
    NULL,                /* m_traverse */
    NULL,                /* m_clear */
    NULL,                /* m_free */
  };
#endif

extern PyObject *const_str_plain___package__;

#if PYTHON_VERSION >= 300
extern PyObject *const_str_dot;

extern PyObject *const_str_plain___loader__;
extern PyObject *metapath_based_loader;
#endif

#if PYTHON_VERSION >= 340
extern PyObject *const_str_plain___spec__;
#endif

extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();
#if PYTHON_VERSION >= 350
extern void _initCompiledCoroutineTypes();
#endif
#if PYTHON_VERSION >= 360
extern void _initCompiledAsyncgenTypes();
#endif

// The exported interface to CPython. On import of the module, this function
// gets called. It has to have an exact function name, in cases it's a shared
// library export. This is hidden behind the MOD_INIT_DECL.

MOD_INIT_DECL( globVar )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_globVar );
    }
    else
    {
        _init_done = true;
    }
#endif

#ifdef _NUITKA_MODULE
    // In case of a stand alone extension module, need to call initialization
    // the init here because that's the first and only time we are going to get
    // called here.

    // Initialize the constant values used.
    _initBuiltinModule();
    createGlobalConstants();

    /* Initialize the compiled types of Nuitka. */
    _initCompiledCellType();
    _initCompiledGeneratorType();
    _initCompiledFunctionType();
    _initCompiledMethodType();
    _initCompiledFrameType();
#if PYTHON_VERSION >= 350
    _initCompiledCoroutineTypes();
#endif
#if PYTHON_VERSION >= 360
    _initCompiledAsyncgenTypes();
#endif

#if PYTHON_VERSION < 300
    _initSlotCompare();
#endif
#if PYTHON_VERSION >= 270
    _initSlotIternext();
#endif

    patchBuiltinModule();
    patchTypeComparison();

    // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
    puts("globVar: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("globVar: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("globVar: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initglobVar" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_globVar = Py_InitModule4(
        "globVar",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_globVar = PyModule_Create( &mdef_globVar );
#endif

    moduledict_globVar = MODULE_DICT( module_globVar );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_globVar, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_globVar,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );

#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_globVar, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_globVar,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_globVar, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_globVar,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_globVar );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_plain_globVar, module_globVar );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_globVar, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_globVar, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_globVar, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

#if PYTHON_VERSION >= 340
#if 0
    UPDATE_STRING_DICT0( moduledict_globVar, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_globVar, (Nuitka_StringObject *)const_str_plain___name__ ),
            metapath_based_loader
        };

        PyObject *spec_value = CALL_FUNCTION_WITH_ARGS2(
            module_spec_class,
            args
        );

        UPDATE_STRING_DICT1( moduledict_globVar, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );

        Py_DECREF( module_spec_class );
    }
#endif
#endif


    // Temp variables if any
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_assign_source_8;
    PyObject *tmp_assign_source_9;
    PyObject *tmp_assign_source_10;
    PyObject *tmp_assign_source_11;
    PyObject *tmp_assign_source_12;
    PyObject *tmp_assign_source_13;
    PyObject *tmp_assign_source_14;
    PyObject *tmp_assign_source_15;
    PyObject *tmp_assign_source_16;
    PyObject *tmp_assign_source_17;
    PyObject *tmp_assign_source_18;
    PyObject *tmp_assign_source_19;
    PyObject *tmp_assign_source_20;
    PyObject *tmp_assign_source_21;
    PyObject *tmp_assign_source_22;
    PyObject *tmp_assign_source_23;
    PyObject *tmp_assign_source_24;
    PyObject *tmp_assign_source_25;
    PyObject *tmp_assign_source_26;
    PyObject *tmp_assign_source_27;
    PyObject *tmp_assign_source_28;
    PyObject *tmp_assign_source_29;
    PyObject *tmp_assign_source_30;
    PyObject *tmp_assign_source_31;
    PyObject *tmp_assign_source_32;
    PyObject *tmp_assign_source_33;
    PyObject *tmp_assign_source_34;
    PyObject *tmp_assign_source_35;
    PyObject *tmp_assign_source_36;
    PyObject *tmp_assign_source_37;
    PyObject *tmp_assign_source_38;
    PyObject *tmp_assign_source_39;
    PyObject *tmp_assign_source_40;
    PyObject *tmp_assign_source_41;
    PyObject *tmp_assign_source_42;
    PyObject *tmp_assign_source_43;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_name_1;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_fromlist_name_2;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_globals_name_2;
    PyObject *tmp_level_name_1;
    PyObject *tmp_level_name_2;
    PyObject *tmp_list_element_1;
    PyObject *tmp_list_element_2;
    PyObject *tmp_list_element_3;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    PyObject *tmp_source_name_1;
    struct Nuitka_FrameObject *frame_0faf66ae9653f286ab6cd87612ab474d;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_globVar, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_a9ab1b0943babe838f3771a50800a35b;
    UPDATE_STRING_DICT0( moduledict_globVar, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_globVar, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    // Frame without reuse.
    frame_0faf66ae9653f286ab6cd87612ab474d = MAKE_MODULE_FRAME( codeobj_0faf66ae9653f286ab6cd87612ab474d, module_globVar );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_0faf66ae9653f286ab6cd87612ab474d );
    assert( Py_REFCNT( frame_0faf66ae9653f286ab6cd87612ab474d ) == 2 );

    // Framed code:
    tmp_name_name_1 = const_str_plain_pieces;
    tmp_globals_name_1 = (PyObject *)moduledict_globVar;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = Py_None;
    tmp_level_name_1 = const_int_0;
    frame_0faf66ae9653f286ab6cd87612ab474d->m_frame.f_lineno = 1;
    tmp_assign_source_4 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_globVar, (Nuitka_StringObject *)const_str_plain_pieces, tmp_assign_source_4 );
    tmp_name_name_2 = const_str_plain_square;
    tmp_globals_name_2 = (PyObject *)moduledict_globVar;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = Py_None;
    tmp_level_name_2 = const_int_0;
    frame_0faf66ae9653f286ab6cd87612ab474d->m_frame.f_lineno = 2;
    tmp_assign_source_5 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_globVar, (Nuitka_StringObject *)const_str_plain_square, tmp_assign_source_5 );
    tmp_assign_source_6 = const_int_neg_1;
    UPDATE_STRING_DICT0( moduledict_globVar, (Nuitka_StringObject *)const_str_plain_numPlayers, tmp_assign_source_6 );
    tmp_assign_source_7 = const_str_empty;
    UPDATE_STRING_DICT0( moduledict_globVar, (Nuitka_StringObject *)const_str_plain_player, tmp_assign_source_7 );
    tmp_assign_source_8 = Py_False;
    UPDATE_STRING_DICT0( moduledict_globVar, (Nuitka_StringObject *)const_str_plain_noPlayers, tmp_assign_source_8 );
    tmp_assign_source_9 = const_int_0;
    UPDATE_STRING_DICT0( moduledict_globVar, (Nuitka_StringObject *)const_str_plain_playerCount, tmp_assign_source_9 );
    tmp_assign_source_10 = const_int_pos_16;
    UPDATE_STRING_DICT0( moduledict_globVar, (Nuitka_StringObject *)const_str_plain_w_NumPieces, tmp_assign_source_10 );
    tmp_assign_source_11 = const_int_pos_16;
    UPDATE_STRING_DICT0( moduledict_globVar, (Nuitka_StringObject *)const_str_plain_b_NumPieces, tmp_assign_source_11 );
    tmp_assign_source_12 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_globVar, (Nuitka_StringObject *)const_str_plain_r_w_NumPieces, tmp_assign_source_12 );
    tmp_assign_source_13 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_globVar, (Nuitka_StringObject *)const_str_plain_r_b_NumPieces, tmp_assign_source_13 );
    tmp_assign_source_14 = Py_False;
    UPDATE_STRING_DICT0( moduledict_globVar, (Nuitka_StringObject *)const_str_plain_w_check, tmp_assign_source_14 );
    tmp_assign_source_15 = Py_False;
    UPDATE_STRING_DICT0( moduledict_globVar, (Nuitka_StringObject *)const_str_plain_b_check, tmp_assign_source_15 );
    tmp_assign_source_16 = Py_False;
    UPDATE_STRING_DICT0( moduledict_globVar, (Nuitka_StringObject *)const_str_plain_removed, tmp_assign_source_16 );
    tmp_assign_source_17 = const_int_neg_1;
    UPDATE_STRING_DICT0( moduledict_globVar, (Nuitka_StringObject *)const_str_plain_removed_label, tmp_assign_source_17 );
    tmp_assign_source_18 = const_str_plain_none;
    UPDATE_STRING_DICT0( moduledict_globVar, (Nuitka_StringObject *)const_str_plain_removed_color, tmp_assign_source_18 );
    tmp_assign_source_19 = const_int_neg_1;
    UPDATE_STRING_DICT0( moduledict_globVar, (Nuitka_StringObject *)const_str_plain_last_row, tmp_assign_source_19 );
    tmp_assign_source_20 = const_int_neg_1;
    UPDATE_STRING_DICT0( moduledict_globVar, (Nuitka_StringObject *)const_str_plain_last_col, tmp_assign_source_20 );
    tmp_assign_source_21 = Py_False;
    UPDATE_STRING_DICT0( moduledict_globVar, (Nuitka_StringObject *)const_str_plain_scanning, tmp_assign_source_21 );
    tmp_assign_source_22 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_globVar, (Nuitka_StringObject *)const_str_plain_r_avail_Num, tmp_assign_source_22 );
    tmp_assign_source_23 = const_int_neg_1;
    UPDATE_STRING_DICT0( moduledict_globVar, (Nuitka_StringObject *)const_str_plain_p_w_Num, tmp_assign_source_23 );
    tmp_assign_source_24 = const_int_neg_1;
    UPDATE_STRING_DICT0( moduledict_globVar, (Nuitka_StringObject *)const_str_plain_p_b_Num, tmp_assign_source_24 );
    tmp_assign_source_25 = Py_True;
    UPDATE_STRING_DICT0( moduledict_globVar, (Nuitka_StringObject *)const_str_plain_m_f_ps, tmp_assign_source_25 );
    tmp_assign_source_26 = const_str_plain_none;
    UPDATE_STRING_DICT0( moduledict_globVar, (Nuitka_StringObject *)const_str_plain_m_f_p_color, tmp_assign_source_26 );
    tmp_assign_source_27 = const_str_plain_none;
    UPDATE_STRING_DICT0( moduledict_globVar, (Nuitka_StringObject *)const_str_plain_m_f_p_type, tmp_assign_source_27 );
    tmp_assign_source_28 = const_int_neg_1;
    UPDATE_STRING_DICT0( moduledict_globVar, (Nuitka_StringObject *)const_str_plain_m_f_p_label, tmp_assign_source_28 );
    tmp_assign_source_29 = const_int_neg_1;
    UPDATE_STRING_DICT0( moduledict_globVar, (Nuitka_StringObject *)const_str_plain_m_f_row, tmp_assign_source_29 );
    tmp_assign_source_30 = const_int_neg_1;
    UPDATE_STRING_DICT0( moduledict_globVar, (Nuitka_StringObject *)const_str_plain_m_f_col, tmp_assign_source_30 );
    tmp_assign_source_31 = Py_True;
    UPDATE_STRING_DICT0( moduledict_globVar, (Nuitka_StringObject *)const_str_plain_m_t_ps, tmp_assign_source_31 );
    tmp_assign_source_32 = const_str_plain_none;
    UPDATE_STRING_DICT0( moduledict_globVar, (Nuitka_StringObject *)const_str_plain_m_t_p_color, tmp_assign_source_32 );
    tmp_assign_source_33 = const_str_plain_none;
    UPDATE_STRING_DICT0( moduledict_globVar, (Nuitka_StringObject *)const_str_plain_m_t_p_type, tmp_assign_source_33 );
    tmp_assign_source_34 = const_int_neg_1;
    UPDATE_STRING_DICT0( moduledict_globVar, (Nuitka_StringObject *)const_str_plain_m_t_p_label, tmp_assign_source_34 );
    tmp_assign_source_35 = const_int_neg_1;
    UPDATE_STRING_DICT0( moduledict_globVar, (Nuitka_StringObject *)const_str_plain_m_t_row, tmp_assign_source_35 );
    tmp_assign_source_36 = const_int_neg_1;
    UPDATE_STRING_DICT0( moduledict_globVar, (Nuitka_StringObject *)const_str_plain_m_t_col, tmp_assign_source_36 );
    tmp_assign_source_37 = PyList_New( 0 );
    UPDATE_STRING_DICT1( moduledict_globVar, (Nuitka_StringObject *)const_str_plain_w_pieces, tmp_assign_source_37 );
    tmp_assign_source_38 = PyList_New( 0 );
    UPDATE_STRING_DICT1( moduledict_globVar, (Nuitka_StringObject *)const_str_plain_b_pieces, tmp_assign_source_38 );
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_globVar, (Nuitka_StringObject *)const_str_plain_pieces );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pieces );
    }

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_0faf66ae9653f286ab6cd87612ab474d->m_frame.f_lineno = 37;
    tmp_list_element_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_Pawn, &PyTuple_GET_ITEM( const_tuple_str_plain_none_str_plain_none_tuple, 0 ) );

    if ( tmp_list_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_39 = PyList_New( 1 );
    PyList_SET_ITEM( tmp_assign_source_39, 0, tmp_list_element_1 );
    UPDATE_STRING_DICT1( moduledict_globVar, (Nuitka_StringObject *)const_str_plain_r_w_pieces, tmp_assign_source_39 );
    tmp_called_instance_2 = GET_STRING_DICT_VALUE( moduledict_globVar, (Nuitka_StringObject *)const_str_plain_pieces );

    if (unlikely( tmp_called_instance_2 == NULL ))
    {
        tmp_called_instance_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pieces );
    }

    if ( tmp_called_instance_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "pieces" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 38;

        goto frame_exception_exit_1;
    }

    frame_0faf66ae9653f286ab6cd87612ab474d->m_frame.f_lineno = 38;
    tmp_list_element_2 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_2, const_str_plain_Pawn, &PyTuple_GET_ITEM( const_tuple_str_plain_none_str_plain_none_tuple, 0 ) );

    if ( tmp_list_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_40 = PyList_New( 1 );
    PyList_SET_ITEM( tmp_assign_source_40, 0, tmp_list_element_2 );
    UPDATE_STRING_DICT1( moduledict_globVar, (Nuitka_StringObject *)const_str_plain_r_b_pieces, tmp_assign_source_40 );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_globVar, (Nuitka_StringObject *)const_str_plain_square );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_square );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "square" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 39;

        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_Square );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 39;

        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = Py_False;
    tmp_args_element_name_2 = const_str_plain_none;
    tmp_called_instance_3 = GET_STRING_DICT_VALUE( moduledict_globVar, (Nuitka_StringObject *)const_str_plain_pieces );

    if (unlikely( tmp_called_instance_3 == NULL ))
    {
        tmp_called_instance_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pieces );
    }

    if ( tmp_called_instance_3 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "pieces" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 39;

        goto frame_exception_exit_1;
    }

    frame_0faf66ae9653f286ab6cd87612ab474d->m_frame.f_lineno = 39;
    tmp_args_element_name_3 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_3, const_str_plain_Pawn, &PyTuple_GET_ITEM( const_tuple_str_plain_none_str_plain_none_tuple, 0 ) );

    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 39;

        goto frame_exception_exit_1;
    }
    tmp_args_element_name_4 = const_int_neg_1;
    tmp_args_element_name_5 = const_int_neg_1;
    frame_0faf66ae9653f286ab6cd87612ab474d->m_frame.f_lineno = 39;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5 };
        tmp_list_element_3 = CALL_FUNCTION_WITH_ARGS5( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_list_element_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 39;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_41 = PyList_New( 1 );
    PyList_SET_ITEM( tmp_assign_source_41, 0, tmp_list_element_3 );
    UPDATE_STRING_DICT1( moduledict_globVar, (Nuitka_StringObject *)const_str_plain_r_avail, tmp_assign_source_41 );

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_0faf66ae9653f286ab6cd87612ab474d );
#endif
    popFrameStack();

    assertFrameObject( frame_0faf66ae9653f286ab6cd87612ab474d );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_0faf66ae9653f286ab6cd87612ab474d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_0faf66ae9653f286ab6cd87612ab474d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_0faf66ae9653f286ab6cd87612ab474d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_0faf66ae9653f286ab6cd87612ab474d, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    tmp_assign_source_42 = PyList_New( 0 );
    UPDATE_STRING_DICT1( moduledict_globVar, (Nuitka_StringObject *)const_str_plain_p_w_moves, tmp_assign_source_42 );
    tmp_assign_source_43 = PyList_New( 0 );
    UPDATE_STRING_DICT1( moduledict_globVar, (Nuitka_StringObject *)const_str_plain_p_b_moves, tmp_assign_source_43 );

    return MOD_RETURN_VALUE( module_globVar );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
