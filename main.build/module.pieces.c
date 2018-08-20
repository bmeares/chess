/* Generated code for Python source for module 'pieces'
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

/* The _module_pieces is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_pieces;
PyDictObject *moduledict_pieces;

/* The module constants used, if any. */
extern PyObject *const_str_plain_Bishop;
static PyObject *const_str_digest_77c7a3d9a5240847268289b67f6c7eed;
extern PyObject *const_str_plain_pawn;
extern PyObject *const_tuple_str_plain_Pawn_tuple;
static PyObject *const_tuple_str_plain_Knight_tuple;
extern PyObject *const_str_plain_piece;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_Knight;
extern PyObject *const_str_plain_Pawn;
static PyObject *const_tuple_str_plain_Bishop_tuple;
extern PyObject *const_str_plain_rook;
static PyObject *const_str_digest_464c33d68068419a5444b16963ef0ca2;
extern PyObject *const_tuple_str_plain_Piece_tuple;
extern PyObject *const_str_plain_King;
extern PyObject *const_str_plain_Queen;
extern PyObject *const_str_plain___path__;
extern PyObject *const_str_plain_Piece;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_pieces;
extern PyObject *const_str_plain_bishop;
extern PyObject *const_str_plain_queen;
static PyObject *const_tuple_str_plain_King_tuple;
static PyObject *const_list_str_digest_464c33d68068419a5444b16963ef0ca2_list;
extern PyObject *const_str_plain_knight;
static PyObject *const_tuple_str_plain_Rook_tuple;
extern PyObject *const_str_plain_king;
extern PyObject *const_str_plain_Rook;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
static PyObject *const_tuple_str_plain_Queen_tuple;
static PyObject *const_str_digest_23c74e859798e49554214cacd7d3dbcf;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_77c7a3d9a5240847268289b67f6c7eed = UNSTREAM_STRING( &constant_bin[ 1959 ], 64, 0 );
    const_tuple_str_plain_Knight_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_Knight_tuple, 0, const_str_plain_Knight ); Py_INCREF( const_str_plain_Knight );
    const_tuple_str_plain_Bishop_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_Bishop_tuple, 0, const_str_plain_Bishop ); Py_INCREF( const_str_plain_Bishop );
    const_str_digest_464c33d68068419a5444b16963ef0ca2 = UNSTREAM_STRING( &constant_bin[ 1959 ], 52, 0 );
    const_tuple_str_plain_King_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_King_tuple, 0, const_str_plain_King ); Py_INCREF( const_str_plain_King );
    const_list_str_digest_464c33d68068419a5444b16963ef0ca2_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_digest_464c33d68068419a5444b16963ef0ca2_list, 0, const_str_digest_464c33d68068419a5444b16963ef0ca2 ); Py_INCREF( const_str_digest_464c33d68068419a5444b16963ef0ca2 );
    const_tuple_str_plain_Rook_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_Rook_tuple, 0, const_str_plain_Rook ); Py_INCREF( const_str_plain_Rook );
    const_tuple_str_plain_Queen_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_Queen_tuple, 0, const_str_plain_Queen ); Py_INCREF( const_str_plain_Queen );
    const_str_digest_23c74e859798e49554214cacd7d3dbcf = UNSTREAM_STRING( &constant_bin[ 2023 ], 15, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_pieces( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_c8fabff1d0bcb8e33483b899521f9d87;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_77c7a3d9a5240847268289b67f6c7eed;
    codeobj_c8fabff1d0bcb8e33483b899521f9d87 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_23c74e859798e49554214cacd7d3dbcf, 1, const_tuple_empty, 0, 0, CO_NOFREE );
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_pieces =
{
    PyModuleDef_HEAD_INIT,
    "pieces",   /* m_name */
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

MOD_INIT_DECL( pieces )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_pieces );
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
    puts("pieces: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("pieces: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("pieces: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initpieces" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_pieces = Py_InitModule4(
        "pieces",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_pieces = PyModule_Create( &mdef_pieces );
#endif

    moduledict_pieces = MODULE_DICT( module_pieces );

    // Update "__package__" value to what it ought to be.
    {
#if 1
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_pieces, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_pieces,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );

#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_pieces, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_pieces,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_pieces, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_pieces,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_pieces );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_plain_pieces, module_pieces );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_pieces, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_pieces, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_pieces, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

#if PYTHON_VERSION >= 340
#if 0
    UPDATE_STRING_DICT0( moduledict_pieces, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_pieces, (Nuitka_StringObject *)const_str_plain___name__ ),
            metapath_based_loader
        };

        PyObject *spec_value = CALL_FUNCTION_WITH_ARGS2(
            module_spec_class,
            args
        );

        UPDATE_STRING_DICT1( moduledict_pieces, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );

        Py_DECREF( module_spec_class );
    }
#endif
#endif


    // Temp variables if any
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
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
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_fromlist_name_2;
    PyObject *tmp_fromlist_name_3;
    PyObject *tmp_fromlist_name_4;
    PyObject *tmp_fromlist_name_5;
    PyObject *tmp_fromlist_name_6;
    PyObject *tmp_fromlist_name_7;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_globals_name_2;
    PyObject *tmp_globals_name_3;
    PyObject *tmp_globals_name_4;
    PyObject *tmp_globals_name_5;
    PyObject *tmp_globals_name_6;
    PyObject *tmp_globals_name_7;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_import_name_from_3;
    PyObject *tmp_import_name_from_4;
    PyObject *tmp_import_name_from_5;
    PyObject *tmp_import_name_from_6;
    PyObject *tmp_import_name_from_7;
    PyObject *tmp_level_name_1;
    PyObject *tmp_level_name_2;
    PyObject *tmp_level_name_3;
    PyObject *tmp_level_name_4;
    PyObject *tmp_level_name_5;
    PyObject *tmp_level_name_6;
    PyObject *tmp_level_name_7;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_locals_name_3;
    PyObject *tmp_locals_name_4;
    PyObject *tmp_locals_name_5;
    PyObject *tmp_locals_name_6;
    PyObject *tmp_locals_name_7;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    PyObject *tmp_name_name_3;
    PyObject *tmp_name_name_4;
    PyObject *tmp_name_name_5;
    PyObject *tmp_name_name_6;
    PyObject *tmp_name_name_7;
    struct Nuitka_FrameObject *frame_c8fabff1d0bcb8e33483b899521f9d87;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_pieces, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_77c7a3d9a5240847268289b67f6c7eed;
    UPDATE_STRING_DICT0( moduledict_pieces, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = LIST_COPY( const_list_str_digest_464c33d68068419a5444b16963ef0ca2_list );
    UPDATE_STRING_DICT1( moduledict_pieces, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3 );
    tmp_assign_source_4 = Py_None;
    UPDATE_STRING_DICT0( moduledict_pieces, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_4 );
    // Frame without reuse.
    frame_c8fabff1d0bcb8e33483b899521f9d87 = MAKE_MODULE_FRAME( codeobj_c8fabff1d0bcb8e33483b899521f9d87, module_pieces );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_c8fabff1d0bcb8e33483b899521f9d87 );
    assert( Py_REFCNT( frame_c8fabff1d0bcb8e33483b899521f9d87 ) == 2 );

    // Framed code:
    tmp_name_name_1 = const_str_plain_piece;
    tmp_globals_name_1 = (PyObject *)moduledict_pieces;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain_Piece_tuple;
    tmp_level_name_1 = const_int_pos_1;
    frame_c8fabff1d0bcb8e33483b899521f9d87->m_frame.f_lineno = 3;
    tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 3;

        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_1 ) )
    {
       tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_1,
            (PyObject *)MODULE_DICT(tmp_import_name_from_1),
            const_str_plain_Piece,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_Piece );
    }

    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 3;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pieces, (Nuitka_StringObject *)const_str_plain_Piece, tmp_assign_source_5 );
    tmp_name_name_2 = const_str_plain_pawn;
    tmp_globals_name_2 = (PyObject *)moduledict_pieces;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = const_tuple_str_plain_Pawn_tuple;
    tmp_level_name_2 = const_int_pos_1;
    frame_c8fabff1d0bcb8e33483b899521f9d87->m_frame.f_lineno = 4;
    tmp_import_name_from_2 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;

        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_2 ) )
    {
       tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_2,
            (PyObject *)MODULE_DICT(tmp_import_name_from_2),
            const_str_plain_Pawn,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_Pawn );
    }

    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pieces, (Nuitka_StringObject *)const_str_plain_Pawn, tmp_assign_source_6 );
    tmp_name_name_3 = const_str_plain_bishop;
    tmp_globals_name_3 = (PyObject *)moduledict_pieces;
    tmp_locals_name_3 = Py_None;
    tmp_fromlist_name_3 = const_tuple_str_plain_Bishop_tuple;
    tmp_level_name_3 = const_int_pos_1;
    frame_c8fabff1d0bcb8e33483b899521f9d87->m_frame.f_lineno = 5;
    tmp_import_name_from_3 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;

        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_3 ) )
    {
       tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_3,
            (PyObject *)MODULE_DICT(tmp_import_name_from_3),
            const_str_plain_Bishop,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_Bishop );
    }

    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pieces, (Nuitka_StringObject *)const_str_plain_Bishop, tmp_assign_source_7 );
    tmp_name_name_4 = const_str_plain_king;
    tmp_globals_name_4 = (PyObject *)moduledict_pieces;
    tmp_locals_name_4 = Py_None;
    tmp_fromlist_name_4 = const_tuple_str_plain_King_tuple;
    tmp_level_name_4 = const_int_pos_1;
    frame_c8fabff1d0bcb8e33483b899521f9d87->m_frame.f_lineno = 6;
    tmp_import_name_from_4 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;

        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_4 ) )
    {
       tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_4,
            (PyObject *)MODULE_DICT(tmp_import_name_from_4),
            const_str_plain_King,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_King );
    }

    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pieces, (Nuitka_StringObject *)const_str_plain_King, tmp_assign_source_8 );
    tmp_name_name_5 = const_str_plain_knight;
    tmp_globals_name_5 = (PyObject *)moduledict_pieces;
    tmp_locals_name_5 = Py_None;
    tmp_fromlist_name_5 = const_tuple_str_plain_Knight_tuple;
    tmp_level_name_5 = const_int_pos_1;
    frame_c8fabff1d0bcb8e33483b899521f9d87->m_frame.f_lineno = 7;
    tmp_import_name_from_5 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
    if ( tmp_import_name_from_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;

        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_5 ) )
    {
       tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_5,
            (PyObject *)MODULE_DICT(tmp_import_name_from_5),
            const_str_plain_Knight,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_Knight );
    }

    Py_DECREF( tmp_import_name_from_5 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pieces, (Nuitka_StringObject *)const_str_plain_Knight, tmp_assign_source_9 );
    tmp_name_name_6 = const_str_plain_queen;
    tmp_globals_name_6 = (PyObject *)moduledict_pieces;
    tmp_locals_name_6 = Py_None;
    tmp_fromlist_name_6 = const_tuple_str_plain_Queen_tuple;
    tmp_level_name_6 = const_int_pos_1;
    frame_c8fabff1d0bcb8e33483b899521f9d87->m_frame.f_lineno = 8;
    tmp_import_name_from_6 = IMPORT_MODULE5( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6 );
    if ( tmp_import_name_from_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;

        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_6 ) )
    {
       tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_6,
            (PyObject *)MODULE_DICT(tmp_import_name_from_6),
            const_str_plain_Queen,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_Queen );
    }

    Py_DECREF( tmp_import_name_from_6 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pieces, (Nuitka_StringObject *)const_str_plain_Queen, tmp_assign_source_10 );
    tmp_name_name_7 = const_str_plain_rook;
    tmp_globals_name_7 = (PyObject *)moduledict_pieces;
    tmp_locals_name_7 = Py_None;
    tmp_fromlist_name_7 = const_tuple_str_plain_Rook_tuple;
    tmp_level_name_7 = const_int_pos_1;
    frame_c8fabff1d0bcb8e33483b899521f9d87->m_frame.f_lineno = 9;
    tmp_import_name_from_7 = IMPORT_MODULE5( tmp_name_name_7, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7, tmp_level_name_7 );
    if ( tmp_import_name_from_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;

        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_7 ) )
    {
       tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_7,
            (PyObject *)MODULE_DICT(tmp_import_name_from_7),
            const_str_plain_Rook,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_Rook );
    }

    Py_DECREF( tmp_import_name_from_7 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pieces, (Nuitka_StringObject *)const_str_plain_Rook, tmp_assign_source_11 );

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_c8fabff1d0bcb8e33483b899521f9d87 );
#endif
    popFrameStack();

    assertFrameObject( frame_c8fabff1d0bcb8e33483b899521f9d87 );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_c8fabff1d0bcb8e33483b899521f9d87 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c8fabff1d0bcb8e33483b899521f9d87, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c8fabff1d0bcb8e33483b899521f9d87->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c8fabff1d0bcb8e33483b899521f9d87, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;

    return MOD_RETURN_VALUE( module_pieces );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
