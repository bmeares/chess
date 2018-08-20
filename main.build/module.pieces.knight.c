/* Generated code for Python source for module 'pieces.knight'
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

/* The _module_pieces$knight is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_pieces$knight;
PyDictObject *moduledict_pieces$knight;

/* The module constants used, if any. */
extern PyObject *const_str_plain___orig_bases__;
extern PyObject *const_str_plain_optionCounter;
static PyObject *const_str_digest_200beb7e8feec5c1655d081f09b6a8dc;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_metaclass;
extern PyObject *const_str_plain___str__;
static PyObject *const_str_digest_df122bac150d9fd8ed32b1a1395a3e41;
extern PyObject *const_str_plain_piece;
extern PyObject *const_tuple_str_plain___class___tuple;
extern PyObject *const_str_plain___qualname__;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_Knight;
extern PyObject *const_str_plain_n;
extern PyObject *const_str_plain_col;
extern PyObject *const_str_plain_W;
extern PyObject *const_str_plain_availMoves;
extern PyObject *const_str_plain_pieceFound;
extern PyObject *const_tuple_str_plain_Piece_tuple;
extern PyObject *const_int_0;
extern PyObject *const_tuple_3b60237ada9568785e5e34c7223e9a53_tuple;
static PyObject *const_str_digest_853917c245e6794f23c5b87efdb92761;
extern PyObject *const_str_plain_rowCount;
extern PyObject *const_tuple_str_plain_self_tuple;
extern PyObject *const_str_plain___init__;
extern PyObject *const_str_plain___prepare__;
static PyObject *const_str_digest_eb1b88cbed45fa5f957516891619f4af;
extern PyObject *const_str_plain_row;
extern PyObject *const_str_plain_option;
extern PyObject *const_str_plain_self;
static PyObject *const_str_plain_N;
extern PyObject *const_int_pos_6;
static PyObject *const_str_digest_8600fd1591409575b284ce664ab8cbc6;
extern PyObject *const_int_pos_7;
extern PyObject *const_str_plain_Piece;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_Grid;
extern PyObject *const_str_plain_pieces;
static PyObject *const_str_digest_81628413e71df581e79dd741cec85034;
extern PyObject *const_str_plain_des;
extern PyObject *const_str_plain_board;
extern PyObject *const_int_pos_2;
extern PyObject *const_str_plain_append;
extern PyObject *const_str_plain_pieceStatus;
extern PyObject *const_str_plain_colCount;
extern PyObject *const_str_plain_scan;
extern PyObject *const_str_plain_type;
extern PyObject *const_tuple_str_plain_self_str_plain_color_str_plain_type_tuple;
extern PyObject *const_str_plain_color;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain___class__;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_200beb7e8feec5c1655d081f09b6a8dc = UNSTREAM_STRING( &constant_bin[ 2276 ], 62, 0 );
    const_str_digest_df122bac150d9fd8ed32b1a1395a3e41 = UNSTREAM_STRING( &constant_bin[ 2338 ], 11, 0 );
    const_str_digest_853917c245e6794f23c5b87efdb92761 = UNSTREAM_STRING( &constant_bin[ 2349 ], 13, 0 );
    const_str_digest_eb1b88cbed45fa5f957516891619f4af = UNSTREAM_STRING( &constant_bin[ 2362 ], 14, 0 );
    const_str_plain_N = UNSTREAM_STRING( &constant_bin[ 178 ], 1, 1 );
    const_str_digest_8600fd1591409575b284ce664ab8cbc6 = UNSTREAM_STRING( &constant_bin[ 2376 ], 22, 0 );
    const_str_digest_81628413e71df581e79dd741cec85034 = UNSTREAM_STRING( &constant_bin[ 2398 ], 15, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_pieces$knight( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_ccd2ca23240293c40d2e31811c964b78;
static PyCodeObject *codeobj_c4b2b71d934da1e3ed7af721819de338;
static PyCodeObject *codeobj_c39e836ecca6a0bf727d2ff3eda7676e;
static PyCodeObject *codeobj_0f2e31bb0c8ed3d33547ab153b78c5a1;
static PyCodeObject *codeobj_e8d473a2afdececce24eacfe11f0e0eb;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_200beb7e8feec5c1655d081f09b6a8dc;
    codeobj_ccd2ca23240293c40d2e31811c964b78 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_8600fd1591409575b284ce664ab8cbc6, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_c4b2b71d934da1e3ed7af721819de338 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_Knight, 4, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_c39e836ecca6a0bf727d2ff3eda7676e = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 5, const_tuple_str_plain_self_str_plain_color_str_plain_type_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_0f2e31bb0c8ed3d33547ab153b78c5a1 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___str__, 8, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_e8d473a2afdececce24eacfe11f0e0eb = MAKE_CODEOBJ( module_filename_obj, const_str_plain_scan, 14, const_tuple_3b60237ada9568785e5e34c7223e9a53_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_1__mro_entries_conversion( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_pieces$knight$$$function_1___init__(  );


static PyObject *MAKE_FUNCTION_pieces$knight$$$function_2___str__(  );


static PyObject *MAKE_FUNCTION_pieces$knight$$$function_3_scan(  );


// The module function definitions.
static PyObject *impl_pieces$knight$$$function_1___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_color = python_pars[ 1 ];
    PyObject *par_type = python_pars[ 2 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_called_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_c39e836ecca6a0bf727d2ff3eda7676e = NULL;

    struct Nuitka_FrameObject *frame_c39e836ecca6a0bf727d2ff3eda7676e;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c39e836ecca6a0bf727d2ff3eda7676e, codeobj_c39e836ecca6a0bf727d2ff3eda7676e, module_pieces$knight, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_c39e836ecca6a0bf727d2ff3eda7676e = cache_frame_c39e836ecca6a0bf727d2ff3eda7676e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c39e836ecca6a0bf727d2ff3eda7676e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c39e836ecca6a0bf727d2ff3eda7676e ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_pieces$knight, (Nuitka_StringObject *)const_str_plain_Piece );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Piece );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Piece" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 6;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___init__ );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_self;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 6;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = par_color;

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "color" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 6;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = par_type;

    if ( tmp_args_element_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "type" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 6;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    frame_c39e836ecca6a0bf727d2ff3eda7676e->m_frame.f_lineno = 6;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c39e836ecca6a0bf727d2ff3eda7676e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c39e836ecca6a0bf727d2ff3eda7676e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c39e836ecca6a0bf727d2ff3eda7676e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c39e836ecca6a0bf727d2ff3eda7676e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c39e836ecca6a0bf727d2ff3eda7676e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c39e836ecca6a0bf727d2ff3eda7676e,
        type_description_1,
        par_self,
        par_color,
        par_type
    );


    // Release cached frame.
    if ( frame_c39e836ecca6a0bf727d2ff3eda7676e == cache_frame_c39e836ecca6a0bf727d2ff3eda7676e )
    {
        Py_DECREF( frame_c39e836ecca6a0bf727d2ff3eda7676e );
    }
    cache_frame_c39e836ecca6a0bf727d2ff3eda7676e = NULL;

    assertFrameObject( frame_c39e836ecca6a0bf727d2ff3eda7676e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pieces$knight$$$function_1___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_color );
    par_color = NULL;

    Py_XDECREF( par_type );
    par_type = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_color );
    par_color = NULL;

    Py_XDECREF( par_type );
    par_type = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pieces$knight$$$function_1___init__ );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_pieces$knight$$$function_2___str__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    int tmp_cmp_Eq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_0f2e31bb0c8ed3d33547ab153b78c5a1 = NULL;

    struct Nuitka_FrameObject *frame_0f2e31bb0c8ed3d33547ab153b78c5a1;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_0f2e31bb0c8ed3d33547ab153b78c5a1, codeobj_0f2e31bb0c8ed3d33547ab153b78c5a1, module_pieces$knight, sizeof(void *) );
    frame_0f2e31bb0c8ed3d33547ab153b78c5a1 = cache_frame_0f2e31bb0c8ed3d33547ab153b78c5a1;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_0f2e31bb0c8ed3d33547ab153b78c5a1 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_0f2e31bb0c8ed3d33547ab153b78c5a1 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_color );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = const_str_plain_W;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_1, tmp_compare_right_1 );
    Py_DECREF( tmp_compare_left_1 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_return_value = const_str_plain_N;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    tmp_return_value = const_str_plain_n;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0f2e31bb0c8ed3d33547ab153b78c5a1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_0f2e31bb0c8ed3d33547ab153b78c5a1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0f2e31bb0c8ed3d33547ab153b78c5a1 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_0f2e31bb0c8ed3d33547ab153b78c5a1, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_0f2e31bb0c8ed3d33547ab153b78c5a1->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_0f2e31bb0c8ed3d33547ab153b78c5a1, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_0f2e31bb0c8ed3d33547ab153b78c5a1,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_0f2e31bb0c8ed3d33547ab153b78c5a1 == cache_frame_0f2e31bb0c8ed3d33547ab153b78c5a1 )
    {
        Py_DECREF( frame_0f2e31bb0c8ed3d33547ab153b78c5a1 );
    }
    cache_frame_0f2e31bb0c8ed3d33547ab153b78c5a1 = NULL;

    assertFrameObject( frame_0f2e31bb0c8ed3d33547ab153b78c5a1 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pieces$knight$$$function_2___str__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( par_self );
    par_self = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pieces$knight$$$function_2___str__ );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_pieces$knight$$$function_3_scan( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_availMoves = NULL;
    PyObject *var_optionCounter = NULL;
    PyObject *var_rowCount = NULL;
    PyObject *var_colCount = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    int tmp_and_left_truth_1;
    int tmp_and_left_truth_2;
    int tmp_and_left_truth_3;
    int tmp_and_left_truth_4;
    int tmp_and_left_truth_5;
    int tmp_and_left_truth_6;
    int tmp_and_left_truth_7;
    int tmp_and_left_truth_8;
    PyObject *tmp_and_left_value_1;
    PyObject *tmp_and_left_value_2;
    PyObject *tmp_and_left_value_3;
    PyObject *tmp_and_left_value_4;
    PyObject *tmp_and_left_value_5;
    PyObject *tmp_and_left_value_6;
    PyObject *tmp_and_left_value_7;
    PyObject *tmp_and_left_value_8;
    PyObject *tmp_and_right_value_1;
    PyObject *tmp_and_right_value_2;
    PyObject *tmp_and_right_value_3;
    PyObject *tmp_and_right_value_4;
    PyObject *tmp_and_right_value_5;
    PyObject *tmp_and_right_value_6;
    PyObject *tmp_and_right_value_7;
    PyObject *tmp_and_right_value_8;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_element_name_6;
    PyObject *tmp_args_element_name_7;
    PyObject *tmp_args_element_name_8;
    PyObject *tmp_args_element_name_9;
    PyObject *tmp_args_element_name_10;
    PyObject *tmp_args_element_name_11;
    PyObject *tmp_args_element_name_12;
    PyObject *tmp_args_element_name_13;
    PyObject *tmp_args_element_name_14;
    PyObject *tmp_args_element_name_15;
    PyObject *tmp_args_element_name_16;
    PyObject *tmp_args_element_name_17;
    PyObject *tmp_args_element_name_18;
    PyObject *tmp_args_element_name_19;
    PyObject *tmp_args_element_name_20;
    PyObject *tmp_args_element_name_21;
    PyObject *tmp_args_element_name_22;
    PyObject *tmp_args_element_name_23;
    PyObject *tmp_args_element_name_24;
    PyObject *tmp_args_element_name_25;
    PyObject *tmp_args_element_name_26;
    PyObject *tmp_args_element_name_27;
    PyObject *tmp_args_element_name_28;
    PyObject *tmp_args_element_name_29;
    PyObject *tmp_args_element_name_30;
    PyObject *tmp_args_element_name_31;
    PyObject *tmp_args_element_name_32;
    PyObject *tmp_args_element_name_33;
    PyObject *tmp_args_element_name_34;
    PyObject *tmp_args_element_name_35;
    PyObject *tmp_args_element_name_36;
    PyObject *tmp_args_element_name_37;
    PyObject *tmp_args_element_name_38;
    PyObject *tmp_args_element_name_39;
    PyObject *tmp_args_element_name_40;
    PyObject *tmp_args_element_name_41;
    PyObject *tmp_args_element_name_42;
    PyObject *tmp_args_element_name_43;
    PyObject *tmp_args_element_name_44;
    PyObject *tmp_args_element_name_45;
    PyObject *tmp_args_element_name_46;
    PyObject *tmp_args_element_name_47;
    PyObject *tmp_args_element_name_48;
    PyObject *tmp_args_element_name_49;
    PyObject *tmp_args_element_name_50;
    PyObject *tmp_args_element_name_51;
    PyObject *tmp_args_element_name_52;
    PyObject *tmp_args_element_name_53;
    PyObject *tmp_args_element_name_54;
    PyObject *tmp_args_element_name_55;
    PyObject *tmp_args_element_name_56;
    PyObject *tmp_args_element_name_57;
    PyObject *tmp_args_element_name_58;
    PyObject *tmp_args_element_name_59;
    PyObject *tmp_args_element_name_60;
    PyObject *tmp_args_element_name_61;
    PyObject *tmp_args_element_name_62;
    PyObject *tmp_args_element_name_63;
    PyObject *tmp_args_element_name_64;
    PyObject *tmp_args_element_name_65;
    PyObject *tmp_args_element_name_66;
    PyObject *tmp_args_element_name_67;
    PyObject *tmp_args_element_name_68;
    PyObject *tmp_args_element_name_69;
    PyObject *tmp_args_element_name_70;
    PyObject *tmp_args_element_name_71;
    PyObject *tmp_args_element_name_72;
    PyObject *tmp_args_element_name_73;
    PyObject *tmp_args_element_name_74;
    PyObject *tmp_args_element_name_75;
    PyObject *tmp_args_element_name_76;
    PyObject *tmp_args_element_name_77;
    PyObject *tmp_args_element_name_78;
    PyObject *tmp_args_element_name_79;
    PyObject *tmp_args_element_name_80;
    PyObject *tmp_args_element_name_81;
    PyObject *tmp_args_element_name_82;
    PyObject *tmp_args_element_name_83;
    PyObject *tmp_args_element_name_84;
    PyObject *tmp_args_element_name_85;
    PyObject *tmp_args_element_name_86;
    PyObject *tmp_args_element_name_87;
    PyObject *tmp_args_element_name_88;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_name_3;
    PyObject *tmp_assattr_name_4;
    PyObject *tmp_assattr_name_5;
    PyObject *tmp_assattr_name_6;
    PyObject *tmp_assattr_name_7;
    PyObject *tmp_assattr_name_8;
    PyObject *tmp_assattr_name_9;
    PyObject *tmp_assattr_name_10;
    PyObject *tmp_assattr_name_11;
    PyObject *tmp_assattr_name_12;
    PyObject *tmp_assattr_name_13;
    PyObject *tmp_assattr_name_14;
    PyObject *tmp_assattr_name_15;
    PyObject *tmp_assattr_name_16;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assattr_target_3;
    PyObject *tmp_assattr_target_4;
    PyObject *tmp_assattr_target_5;
    PyObject *tmp_assattr_target_6;
    PyObject *tmp_assattr_target_7;
    PyObject *tmp_assattr_target_8;
    PyObject *tmp_assattr_target_9;
    PyObject *tmp_assattr_target_10;
    PyObject *tmp_assattr_target_11;
    PyObject *tmp_assattr_target_12;
    PyObject *tmp_assattr_target_13;
    PyObject *tmp_assattr_target_14;
    PyObject *tmp_assattr_target_15;
    PyObject *tmp_assattr_target_16;
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
    PyObject *tmp_bool_arg_1;
    PyObject *tmp_bool_arg_2;
    PyObject *tmp_bool_arg_3;
    PyObject *tmp_bool_arg_4;
    PyObject *tmp_bool_arg_5;
    PyObject *tmp_bool_arg_6;
    PyObject *tmp_bool_arg_7;
    PyObject *tmp_bool_arg_8;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    PyObject *tmp_called_name_7;
    PyObject *tmp_called_name_8;
    PyObject *tmp_called_name_9;
    PyObject *tmp_called_name_10;
    PyObject *tmp_called_name_11;
    PyObject *tmp_called_name_12;
    PyObject *tmp_called_name_13;
    PyObject *tmp_called_name_14;
    PyObject *tmp_called_name_15;
    PyObject *tmp_called_name_16;
    PyObject *tmp_called_name_17;
    PyObject *tmp_called_name_18;
    PyObject *tmp_called_name_19;
    PyObject *tmp_called_name_20;
    PyObject *tmp_called_name_21;
    PyObject *tmp_called_name_22;
    PyObject *tmp_called_name_23;
    PyObject *tmp_called_name_24;
    PyObject *tmp_called_name_25;
    PyObject *tmp_called_name_26;
    PyObject *tmp_called_name_27;
    PyObject *tmp_called_name_28;
    PyObject *tmp_called_name_29;
    PyObject *tmp_called_name_30;
    PyObject *tmp_called_name_31;
    PyObject *tmp_called_name_32;
    PyObject *tmp_called_name_33;
    PyObject *tmp_called_name_34;
    PyObject *tmp_called_name_35;
    PyObject *tmp_called_name_36;
    PyObject *tmp_called_name_37;
    PyObject *tmp_called_name_38;
    PyObject *tmp_called_name_39;
    PyObject *tmp_called_name_40;
    PyObject *tmp_called_name_41;
    PyObject *tmp_called_name_42;
    PyObject *tmp_called_name_43;
    PyObject *tmp_called_name_44;
    PyObject *tmp_called_name_45;
    PyObject *tmp_called_name_46;
    PyObject *tmp_called_name_47;
    PyObject *tmp_called_name_48;
    int tmp_cmp_NotEq_1;
    int tmp_cmp_NotEq_2;
    int tmp_cmp_NotEq_3;
    int tmp_cmp_NotEq_4;
    int tmp_cmp_NotEq_5;
    int tmp_cmp_NotEq_6;
    int tmp_cmp_NotEq_7;
    int tmp_cmp_NotEq_8;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_left_5;
    PyObject *tmp_compare_left_6;
    PyObject *tmp_compare_left_7;
    PyObject *tmp_compare_left_8;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    PyObject *tmp_compare_right_5;
    PyObject *tmp_compare_right_6;
    PyObject *tmp_compare_right_7;
    PyObject *tmp_compare_right_8;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_left_3;
    PyObject *tmp_compexpr_left_4;
    PyObject *tmp_compexpr_left_5;
    PyObject *tmp_compexpr_left_6;
    PyObject *tmp_compexpr_left_7;
    PyObject *tmp_compexpr_left_8;
    PyObject *tmp_compexpr_left_9;
    PyObject *tmp_compexpr_left_10;
    PyObject *tmp_compexpr_left_11;
    PyObject *tmp_compexpr_left_12;
    PyObject *tmp_compexpr_left_13;
    PyObject *tmp_compexpr_left_14;
    PyObject *tmp_compexpr_left_15;
    PyObject *tmp_compexpr_left_16;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    PyObject *tmp_compexpr_right_3;
    PyObject *tmp_compexpr_right_4;
    PyObject *tmp_compexpr_right_5;
    PyObject *tmp_compexpr_right_6;
    PyObject *tmp_compexpr_right_7;
    PyObject *tmp_compexpr_right_8;
    PyObject *tmp_compexpr_right_9;
    PyObject *tmp_compexpr_right_10;
    PyObject *tmp_compexpr_right_11;
    PyObject *tmp_compexpr_right_12;
    PyObject *tmp_compexpr_right_13;
    PyObject *tmp_compexpr_right_14;
    PyObject *tmp_compexpr_right_15;
    PyObject *tmp_compexpr_right_16;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    int tmp_cond_truth_4;
    int tmp_cond_truth_5;
    int tmp_cond_truth_6;
    int tmp_cond_truth_7;
    int tmp_cond_truth_8;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_cond_value_4;
    PyObject *tmp_cond_value_5;
    PyObject *tmp_cond_value_6;
    PyObject *tmp_cond_value_7;
    PyObject *tmp_cond_value_8;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_left_name_4;
    PyObject *tmp_left_name_5;
    PyObject *tmp_left_name_6;
    PyObject *tmp_left_name_7;
    PyObject *tmp_left_name_8;
    PyObject *tmp_left_name_9;
    PyObject *tmp_left_name_10;
    PyObject *tmp_left_name_11;
    PyObject *tmp_left_name_12;
    PyObject *tmp_left_name_13;
    PyObject *tmp_left_name_14;
    PyObject *tmp_left_name_15;
    PyObject *tmp_left_name_16;
    PyObject *tmp_left_name_17;
    PyObject *tmp_left_name_18;
    PyObject *tmp_left_name_19;
    PyObject *tmp_left_name_20;
    PyObject *tmp_left_name_21;
    PyObject *tmp_left_name_22;
    PyObject *tmp_left_name_23;
    PyObject *tmp_left_name_24;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    PyObject *tmp_right_name_4;
    PyObject *tmp_right_name_5;
    PyObject *tmp_right_name_6;
    PyObject *tmp_right_name_7;
    PyObject *tmp_right_name_8;
    PyObject *tmp_right_name_9;
    PyObject *tmp_right_name_10;
    PyObject *tmp_right_name_11;
    PyObject *tmp_right_name_12;
    PyObject *tmp_right_name_13;
    PyObject *tmp_right_name_14;
    PyObject *tmp_right_name_15;
    PyObject *tmp_right_name_16;
    PyObject *tmp_right_name_17;
    PyObject *tmp_right_name_18;
    PyObject *tmp_right_name_19;
    PyObject *tmp_right_name_20;
    PyObject *tmp_right_name_21;
    PyObject *tmp_right_name_22;
    PyObject *tmp_right_name_23;
    PyObject *tmp_right_name_24;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    PyObject *tmp_source_name_8;
    PyObject *tmp_source_name_9;
    PyObject *tmp_source_name_10;
    PyObject *tmp_source_name_11;
    PyObject *tmp_source_name_12;
    PyObject *tmp_source_name_13;
    PyObject *tmp_source_name_14;
    PyObject *tmp_source_name_15;
    PyObject *tmp_source_name_16;
    PyObject *tmp_source_name_17;
    PyObject *tmp_source_name_18;
    PyObject *tmp_source_name_19;
    PyObject *tmp_source_name_20;
    PyObject *tmp_source_name_21;
    PyObject *tmp_source_name_22;
    PyObject *tmp_source_name_23;
    PyObject *tmp_source_name_24;
    PyObject *tmp_source_name_25;
    PyObject *tmp_source_name_26;
    PyObject *tmp_source_name_27;
    PyObject *tmp_source_name_28;
    PyObject *tmp_source_name_29;
    PyObject *tmp_source_name_30;
    PyObject *tmp_source_name_31;
    PyObject *tmp_source_name_32;
    PyObject *tmp_source_name_33;
    PyObject *tmp_source_name_34;
    PyObject *tmp_source_name_35;
    PyObject *tmp_source_name_36;
    PyObject *tmp_source_name_37;
    PyObject *tmp_source_name_38;
    PyObject *tmp_source_name_39;
    PyObject *tmp_source_name_40;
    PyObject *tmp_source_name_41;
    PyObject *tmp_source_name_42;
    PyObject *tmp_source_name_43;
    PyObject *tmp_source_name_44;
    PyObject *tmp_source_name_45;
    PyObject *tmp_source_name_46;
    PyObject *tmp_source_name_47;
    PyObject *tmp_source_name_48;
    PyObject *tmp_source_name_49;
    PyObject *tmp_source_name_50;
    PyObject *tmp_source_name_51;
    PyObject *tmp_source_name_52;
    PyObject *tmp_source_name_53;
    PyObject *tmp_source_name_54;
    PyObject *tmp_source_name_55;
    PyObject *tmp_source_name_56;
    PyObject *tmp_source_name_57;
    PyObject *tmp_source_name_58;
    PyObject *tmp_source_name_59;
    PyObject *tmp_source_name_60;
    PyObject *tmp_source_name_61;
    PyObject *tmp_source_name_62;
    PyObject *tmp_source_name_63;
    PyObject *tmp_source_name_64;
    PyObject *tmp_source_name_65;
    PyObject *tmp_source_name_66;
    PyObject *tmp_source_name_67;
    PyObject *tmp_source_name_68;
    PyObject *tmp_source_name_69;
    PyObject *tmp_source_name_70;
    PyObject *tmp_source_name_71;
    PyObject *tmp_source_name_72;
    PyObject *tmp_source_name_73;
    PyObject *tmp_source_name_74;
    PyObject *tmp_source_name_75;
    PyObject *tmp_source_name_76;
    PyObject *tmp_source_name_77;
    PyObject *tmp_source_name_78;
    PyObject *tmp_source_name_79;
    PyObject *tmp_source_name_80;
    PyObject *tmp_source_name_81;
    PyObject *tmp_source_name_82;
    PyObject *tmp_source_name_83;
    PyObject *tmp_source_name_84;
    PyObject *tmp_source_name_85;
    PyObject *tmp_source_name_86;
    PyObject *tmp_source_name_87;
    PyObject *tmp_source_name_88;
    PyObject *tmp_source_name_89;
    PyObject *tmp_source_name_90;
    PyObject *tmp_source_name_91;
    PyObject *tmp_source_name_92;
    PyObject *tmp_source_name_93;
    PyObject *tmp_source_name_94;
    PyObject *tmp_source_name_95;
    PyObject *tmp_source_name_96;
    PyObject *tmp_source_name_97;
    PyObject *tmp_source_name_98;
    PyObject *tmp_source_name_99;
    PyObject *tmp_source_name_100;
    PyObject *tmp_source_name_101;
    PyObject *tmp_source_name_102;
    PyObject *tmp_source_name_103;
    PyObject *tmp_source_name_104;
    PyObject *tmp_source_name_105;
    PyObject *tmp_source_name_106;
    PyObject *tmp_source_name_107;
    PyObject *tmp_source_name_108;
    PyObject *tmp_source_name_109;
    PyObject *tmp_source_name_110;
    PyObject *tmp_source_name_111;
    PyObject *tmp_source_name_112;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_e8d473a2afdececce24eacfe11f0e0eb = NULL;

    struct Nuitka_FrameObject *frame_e8d473a2afdececce24eacfe11f0e0eb;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = PyList_New( 0 );
    assert( var_availMoves == NULL );
    var_availMoves = tmp_assign_source_1;

    tmp_assign_source_2 = const_int_pos_1;
    assert( var_optionCounter == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var_optionCounter = tmp_assign_source_2;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e8d473a2afdececce24eacfe11f0e0eb, codeobj_e8d473a2afdececce24eacfe11f0e0eb, module_pieces$knight, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_e8d473a2afdececce24eacfe11f0e0eb = cache_frame_e8d473a2afdececce24eacfe11f0e0eb;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e8d473a2afdececce24eacfe11f0e0eb );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e8d473a2afdececce24eacfe11f0e0eb ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_left_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_row );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_1 = const_int_pos_2;
    tmp_assign_source_3 = BINARY_OPERATION_SUB( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    assert( var_rowCount == NULL );
    var_rowCount = tmp_assign_source_3;

    tmp_source_name_2 = par_self;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 21;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_col );
    if ( tmp_left_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_2 = const_int_pos_1;
    tmp_assign_source_4 = BINARY_OPERATION_SUB( tmp_left_name_2, tmp_right_name_2 );
    Py_DECREF( tmp_left_name_2 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    assert( var_colCount == NULL );
    var_colCount = tmp_assign_source_4;

    tmp_source_name_3 = par_self;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 22;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_row );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_1 = const_int_pos_1;
    tmp_and_left_value_1 = RICH_COMPARE_GT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_1 );

        exception_lineno = 22;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    if ( tmp_and_left_truth_1 == 1 )
    {
        goto and_right_1;
    }
    else
    {
        goto and_left_1;
    }
    and_right_1:;
    Py_DECREF( tmp_and_left_value_1 );
    tmp_source_name_4 = par_self;

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 22;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_col );
    if ( tmp_compexpr_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_2 = const_int_0;
    tmp_and_right_value_1 = RICH_COMPARE_GT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    Py_DECREF( tmp_compexpr_left_2 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_cond_value_1 = tmp_and_right_value_1;
    goto and_end_1;
    and_left_1:;
    tmp_cond_value_1 = tmp_and_left_value_1;
    and_end_1:;
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 22;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_pieces$knight, (Nuitka_StringObject *)const_str_plain_board );

    if (unlikely( tmp_source_name_7 == NULL ))
    {
        tmp_source_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_board );
    }

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "board" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 23;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_Grid );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = var_rowCount;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "rowCount" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 23;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = var_colCount;

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "colCount" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 23;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    frame_e8d473a2afdececce24eacfe11f0e0eb->m_frame.f_lineno = 23;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_source_name_6 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_source_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_piece );
    Py_DECREF( tmp_source_name_6 );
    if ( tmp_source_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_color );
    Py_DECREF( tmp_source_name_5 );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_8 = par_self;

    if ( tmp_source_name_8 == NULL )
    {
        Py_DECREF( tmp_compare_left_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 23;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_color );
    if ( tmp_compare_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 23;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_1, tmp_compare_right_1 );
    Py_DECREF( tmp_compare_left_1 );
    Py_DECREF( tmp_compare_right_1 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_NotEq_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_assattr_name_1 = Py_True;
    tmp_source_name_9 = GET_STRING_DICT_VALUE( moduledict_pieces$knight, (Nuitka_StringObject *)const_str_plain_board );

    if (unlikely( tmp_source_name_9 == NULL ))
    {
        tmp_source_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_board );
    }

    if ( tmp_source_name_9 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "board" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 24;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_Grid );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = var_rowCount;

    if ( tmp_args_element_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "rowCount" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 24;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_4 = var_colCount;

    if ( tmp_args_element_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "colCount" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 24;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    frame_e8d473a2afdececce24eacfe11f0e0eb->m_frame.f_lineno = 24;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_assattr_target_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_assattr_target_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_des, tmp_assattr_name_1 );
    Py_DECREF( tmp_assattr_target_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_2 = var_optionCounter;

    if ( tmp_assattr_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "optionCounter" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 25;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_10 = GET_STRING_DICT_VALUE( moduledict_pieces$knight, (Nuitka_StringObject *)const_str_plain_board );

    if (unlikely( tmp_source_name_10 == NULL ))
    {
        tmp_source_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_board );
    }

    if ( tmp_source_name_10 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "board" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 25;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_Grid );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_5 = var_rowCount;

    if ( tmp_args_element_name_5 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "rowCount" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 25;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_6 = var_colCount;

    if ( tmp_args_element_name_6 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "colCount" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 25;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    frame_e8d473a2afdececce24eacfe11f0e0eb->m_frame.f_lineno = 25;
    {
        PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
        tmp_assattr_target_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    if ( tmp_assattr_target_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_option, tmp_assattr_name_2 );
    Py_DECREF( tmp_assattr_target_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_3 = var_optionCounter;

    if ( tmp_left_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "optionCounter" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 26;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_3 = const_int_pos_1;
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_3, tmp_right_name_3 );
    tmp_assign_source_5 = tmp_left_name_3;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    var_optionCounter = tmp_assign_source_5;

    tmp_source_name_11 = var_availMoves;

    if ( tmp_source_name_11 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "availMoves" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 27;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_append );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 27;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_12 = GET_STRING_DICT_VALUE( moduledict_pieces$knight, (Nuitka_StringObject *)const_str_plain_board );

    if (unlikely( tmp_source_name_12 == NULL ))
    {
        tmp_source_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_board );
    }

    if ( tmp_source_name_12 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "board" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 27;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_Grid );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_4 );

        exception_lineno = 27;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_8 = var_rowCount;

    if ( tmp_args_element_name_8 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_called_name_5 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "rowCount" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 27;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_9 = var_colCount;

    if ( tmp_args_element_name_9 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_called_name_5 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "colCount" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 27;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    frame_e8d473a2afdececce24eacfe11f0e0eb->m_frame.f_lineno = 27;
    {
        PyObject *call_args[] = { tmp_args_element_name_8, tmp_args_element_name_9 };
        tmp_args_element_name_7 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_called_name_5 );
    if ( tmp_args_element_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_4 );

        exception_lineno = 27;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    frame_e8d473a2afdececce24eacfe11f0e0eb->m_frame.f_lineno = 27;
    {
        PyObject *call_args[] = { tmp_args_element_name_7 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    Py_DECREF( tmp_args_element_name_7 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 27;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_14 = GET_STRING_DICT_VALUE( moduledict_pieces$knight, (Nuitka_StringObject *)const_str_plain_board );

    if (unlikely( tmp_source_name_14 == NULL ))
    {
        tmp_source_name_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_board );
    }

    if ( tmp_source_name_14 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "board" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 28;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_Grid );
    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_10 = var_rowCount;

    if ( tmp_args_element_name_10 == NULL )
    {
        Py_DECREF( tmp_called_name_6 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "rowCount" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 28;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_11 = var_colCount;

    if ( tmp_args_element_name_11 == NULL )
    {
        Py_DECREF( tmp_called_name_6 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "colCount" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 28;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    frame_e8d473a2afdececce24eacfe11f0e0eb->m_frame.f_lineno = 28;
    {
        PyObject *call_args[] = { tmp_args_element_name_10, tmp_args_element_name_11 };
        tmp_source_name_13 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_6, call_args );
    }

    Py_DECREF( tmp_called_name_6 );
    if ( tmp_source_name_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_bool_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_pieceStatus );
    Py_DECREF( tmp_source_name_13 );
    if ( tmp_bool_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_unused = TO_BOOL( tmp_bool_arg_1 );
    Py_DECREF( tmp_bool_arg_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    branch_no_1:;
    tmp_source_name_15 = par_self;

    if ( tmp_source_name_15 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 32;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_row );
    if ( tmp_left_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_4 = const_int_pos_2;
    tmp_assign_source_6 = BINARY_OPERATION_SUB( tmp_left_name_4, tmp_right_name_4 );
    Py_DECREF( tmp_left_name_4 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_rowCount;
        var_rowCount = tmp_assign_source_6;
        Py_XDECREF( old );
    }

    tmp_source_name_16 = par_self;

    if ( tmp_source_name_16 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 33;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_col );
    if ( tmp_left_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_5 = const_int_pos_1;
    tmp_assign_source_7 = BINARY_OPERATION_ADD( tmp_left_name_5, tmp_right_name_5 );
    Py_DECREF( tmp_left_name_5 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_colCount;
        var_colCount = tmp_assign_source_7;
        Py_XDECREF( old );
    }

    tmp_source_name_17 = par_self;

    if ( tmp_source_name_17 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 34;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_left_3 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_row );
    if ( tmp_compexpr_left_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_3 = const_int_pos_1;
    tmp_and_left_value_2 = RICH_COMPARE_GT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
    Py_DECREF( tmp_compexpr_left_3 );
    if ( tmp_and_left_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_2 = CHECK_IF_TRUE( tmp_and_left_value_2 );
    if ( tmp_and_left_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_2 );

        exception_lineno = 34;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    if ( tmp_and_left_truth_2 == 1 )
    {
        goto and_right_2;
    }
    else
    {
        goto and_left_2;
    }
    and_right_2:;
    Py_DECREF( tmp_and_left_value_2 );
    tmp_source_name_18 = par_self;

    if ( tmp_source_name_18 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 34;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_left_4 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_col );
    if ( tmp_compexpr_left_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_4 = const_int_pos_7;
    tmp_and_right_value_2 = RICH_COMPARE_LT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
    Py_DECREF( tmp_compexpr_left_4 );
    if ( tmp_and_right_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_cond_value_2 = tmp_and_right_value_2;
    goto and_end_2;
    and_left_2:;
    tmp_cond_value_2 = tmp_and_left_value_2;
    and_end_2:;
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        exception_lineno = 34;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_source_name_21 = GET_STRING_DICT_VALUE( moduledict_pieces$knight, (Nuitka_StringObject *)const_str_plain_board );

    if (unlikely( tmp_source_name_21 == NULL ))
    {
        tmp_source_name_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_board );
    }

    if ( tmp_source_name_21 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "board" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 35;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_Grid );
    if ( tmp_called_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_12 = var_rowCount;

    if ( tmp_args_element_name_12 == NULL )
    {
        Py_DECREF( tmp_called_name_7 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "rowCount" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 35;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_13 = var_colCount;

    if ( tmp_args_element_name_13 == NULL )
    {
        Py_DECREF( tmp_called_name_7 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "colCount" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 35;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    frame_e8d473a2afdececce24eacfe11f0e0eb->m_frame.f_lineno = 35;
    {
        PyObject *call_args[] = { tmp_args_element_name_12, tmp_args_element_name_13 };
        tmp_source_name_20 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_7, call_args );
    }

    Py_DECREF( tmp_called_name_7 );
    if ( tmp_source_name_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_19 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_piece );
    Py_DECREF( tmp_source_name_20 );
    if ( tmp_source_name_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_compare_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_color );
    Py_DECREF( tmp_source_name_19 );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_22 = par_self;

    if ( tmp_source_name_22 == NULL )
    {
        Py_DECREF( tmp_compare_left_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 35;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_color );
    if ( tmp_compare_right_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_2 );

        exception_lineno = 35;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_cmp_NotEq_2 = RICH_COMPARE_BOOL_NE( tmp_compare_left_2, tmp_compare_right_2 );
    Py_DECREF( tmp_compare_left_2 );
    Py_DECREF( tmp_compare_right_2 );
    if ( tmp_cmp_NotEq_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_NotEq_2 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_assattr_name_3 = Py_True;
    tmp_source_name_23 = GET_STRING_DICT_VALUE( moduledict_pieces$knight, (Nuitka_StringObject *)const_str_plain_board );

    if (unlikely( tmp_source_name_23 == NULL ))
    {
        tmp_source_name_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_board );
    }

    if ( tmp_source_name_23 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "board" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 36;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain_Grid );
    if ( tmp_called_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_14 = var_rowCount;

    if ( tmp_args_element_name_14 == NULL )
    {
        Py_DECREF( tmp_called_name_8 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "rowCount" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 36;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_15 = var_colCount;

    if ( tmp_args_element_name_15 == NULL )
    {
        Py_DECREF( tmp_called_name_8 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "colCount" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 36;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    frame_e8d473a2afdececce24eacfe11f0e0eb->m_frame.f_lineno = 36;
    {
        PyObject *call_args[] = { tmp_args_element_name_14, tmp_args_element_name_15 };
        tmp_assattr_target_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_8, call_args );
    }

    Py_DECREF( tmp_called_name_8 );
    if ( tmp_assattr_target_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_des, tmp_assattr_name_3 );
    Py_DECREF( tmp_assattr_target_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_4 = var_optionCounter;

    if ( tmp_assattr_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "optionCounter" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 37;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_24 = GET_STRING_DICT_VALUE( moduledict_pieces$knight, (Nuitka_StringObject *)const_str_plain_board );

    if (unlikely( tmp_source_name_24 == NULL ))
    {
        tmp_source_name_24 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_board );
    }

    if ( tmp_source_name_24 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "board" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 37;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain_Grid );
    if ( tmp_called_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_16 = var_rowCount;

    if ( tmp_args_element_name_16 == NULL )
    {
        Py_DECREF( tmp_called_name_9 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "rowCount" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 37;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_17 = var_colCount;

    if ( tmp_args_element_name_17 == NULL )
    {
        Py_DECREF( tmp_called_name_9 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "colCount" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 37;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    frame_e8d473a2afdececce24eacfe11f0e0eb->m_frame.f_lineno = 37;
    {
        PyObject *call_args[] = { tmp_args_element_name_16, tmp_args_element_name_17 };
        tmp_assattr_target_4 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_9, call_args );
    }

    Py_DECREF( tmp_called_name_9 );
    if ( tmp_assattr_target_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_option, tmp_assattr_name_4 );
    Py_DECREF( tmp_assattr_target_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_6 = var_optionCounter;

    if ( tmp_left_name_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "optionCounter" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 38;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_6 = const_int_pos_1;
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_6, tmp_right_name_6 );
    tmp_assign_source_8 = tmp_left_name_6;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    var_optionCounter = tmp_assign_source_8;

    tmp_source_name_25 = var_availMoves;

    if ( tmp_source_name_25 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "availMoves" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 39;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_25, const_str_plain_append );
    if ( tmp_called_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 39;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_26 = GET_STRING_DICT_VALUE( moduledict_pieces$knight, (Nuitka_StringObject *)const_str_plain_board );

    if (unlikely( tmp_source_name_26 == NULL ))
    {
        tmp_source_name_26 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_board );
    }

    if ( tmp_source_name_26 == NULL )
    {
        Py_DECREF( tmp_called_name_10 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "board" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 39;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_26, const_str_plain_Grid );
    if ( tmp_called_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_10 );

        exception_lineno = 39;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_19 = var_rowCount;

    if ( tmp_args_element_name_19 == NULL )
    {
        Py_DECREF( tmp_called_name_10 );
        Py_DECREF( tmp_called_name_11 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "rowCount" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 39;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_20 = var_colCount;

    if ( tmp_args_element_name_20 == NULL )
    {
        Py_DECREF( tmp_called_name_10 );
        Py_DECREF( tmp_called_name_11 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "colCount" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 39;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    frame_e8d473a2afdececce24eacfe11f0e0eb->m_frame.f_lineno = 39;
    {
        PyObject *call_args[] = { tmp_args_element_name_19, tmp_args_element_name_20 };
        tmp_args_element_name_18 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_11, call_args );
    }

    Py_DECREF( tmp_called_name_11 );
    if ( tmp_args_element_name_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_10 );

        exception_lineno = 39;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    frame_e8d473a2afdececce24eacfe11f0e0eb->m_frame.f_lineno = 39;
    {
        PyObject *call_args[] = { tmp_args_element_name_18 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_10, call_args );
    }

    Py_DECREF( tmp_called_name_10 );
    Py_DECREF( tmp_args_element_name_18 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 39;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_28 = GET_STRING_DICT_VALUE( moduledict_pieces$knight, (Nuitka_StringObject *)const_str_plain_board );

    if (unlikely( tmp_source_name_28 == NULL ))
    {
        tmp_source_name_28 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_board );
    }

    if ( tmp_source_name_28 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "board" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 40;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_28, const_str_plain_Grid );
    if ( tmp_called_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_21 = var_rowCount;

    if ( tmp_args_element_name_21 == NULL )
    {
        Py_DECREF( tmp_called_name_12 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "rowCount" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 40;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_22 = var_colCount;

    if ( tmp_args_element_name_22 == NULL )
    {
        Py_DECREF( tmp_called_name_12 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "colCount" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 40;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    frame_e8d473a2afdececce24eacfe11f0e0eb->m_frame.f_lineno = 40;
    {
        PyObject *call_args[] = { tmp_args_element_name_21, tmp_args_element_name_22 };
        tmp_source_name_27 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_12, call_args );
    }

    Py_DECREF( tmp_called_name_12 );
    if ( tmp_source_name_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_bool_arg_2 = LOOKUP_ATTRIBUTE( tmp_source_name_27, const_str_plain_pieceStatus );
    Py_DECREF( tmp_source_name_27 );
    if ( tmp_bool_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_unused = TO_BOOL( tmp_bool_arg_2 );
    Py_DECREF( tmp_bool_arg_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    branch_no_4:;
    branch_no_3:;
    tmp_source_name_29 = par_self;

    if ( tmp_source_name_29 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 44;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_29, const_str_plain_row );
    if ( tmp_left_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_7 = const_int_pos_1;
    tmp_assign_source_9 = BINARY_OPERATION_SUB( tmp_left_name_7, tmp_right_name_7 );
    Py_DECREF( tmp_left_name_7 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_rowCount;
        var_rowCount = tmp_assign_source_9;
        Py_XDECREF( old );
    }

    tmp_source_name_30 = par_self;

    if ( tmp_source_name_30 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 45;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_30, const_str_plain_col );
    if ( tmp_left_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 45;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_8 = const_int_pos_2;
    tmp_assign_source_10 = BINARY_OPERATION_ADD( tmp_left_name_8, tmp_right_name_8 );
    Py_DECREF( tmp_left_name_8 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 45;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_colCount;
        var_colCount = tmp_assign_source_10;
        Py_XDECREF( old );
    }

    tmp_source_name_31 = par_self;

    if ( tmp_source_name_31 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 46;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_left_5 = LOOKUP_ATTRIBUTE( tmp_source_name_31, const_str_plain_row );
    if ( tmp_compexpr_left_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_5 = const_int_0;
    tmp_and_left_value_3 = RICH_COMPARE_GT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
    Py_DECREF( tmp_compexpr_left_5 );
    if ( tmp_and_left_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_3 = CHECK_IF_TRUE( tmp_and_left_value_3 );
    if ( tmp_and_left_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_3 );

        exception_lineno = 46;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    if ( tmp_and_left_truth_3 == 1 )
    {
        goto and_right_3;
    }
    else
    {
        goto and_left_3;
    }
    and_right_3:;
    Py_DECREF( tmp_and_left_value_3 );
    tmp_source_name_32 = par_self;

    if ( tmp_source_name_32 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 46;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_left_6 = LOOKUP_ATTRIBUTE( tmp_source_name_32, const_str_plain_col );
    if ( tmp_compexpr_left_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_6 = const_int_pos_6;
    tmp_and_right_value_3 = RICH_COMPARE_LT( tmp_compexpr_left_6, tmp_compexpr_right_6 );
    Py_DECREF( tmp_compexpr_left_6 );
    if ( tmp_and_right_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_cond_value_3 = tmp_and_right_value_3;
    goto and_end_3;
    and_left_3:;
    tmp_cond_value_3 = tmp_and_left_value_3;
    and_end_3:;
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_3 );

        exception_lineno = 46;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == 1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_source_name_35 = GET_STRING_DICT_VALUE( moduledict_pieces$knight, (Nuitka_StringObject *)const_str_plain_board );

    if (unlikely( tmp_source_name_35 == NULL ))
    {
        tmp_source_name_35 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_board );
    }

    if ( tmp_source_name_35 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "board" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 47;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_35, const_str_plain_Grid );
    if ( tmp_called_name_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 47;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_23 = var_rowCount;

    if ( tmp_args_element_name_23 == NULL )
    {
        Py_DECREF( tmp_called_name_13 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "rowCount" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 47;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_24 = var_colCount;

    if ( tmp_args_element_name_24 == NULL )
    {
        Py_DECREF( tmp_called_name_13 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "colCount" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 47;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    frame_e8d473a2afdececce24eacfe11f0e0eb->m_frame.f_lineno = 47;
    {
        PyObject *call_args[] = { tmp_args_element_name_23, tmp_args_element_name_24 };
        tmp_source_name_34 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_13, call_args );
    }

    Py_DECREF( tmp_called_name_13 );
    if ( tmp_source_name_34 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 47;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_33 = LOOKUP_ATTRIBUTE( tmp_source_name_34, const_str_plain_piece );
    Py_DECREF( tmp_source_name_34 );
    if ( tmp_source_name_33 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 47;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_compare_left_3 = LOOKUP_ATTRIBUTE( tmp_source_name_33, const_str_plain_color );
    Py_DECREF( tmp_source_name_33 );
    if ( tmp_compare_left_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 47;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_36 = par_self;

    if ( tmp_source_name_36 == NULL )
    {
        Py_DECREF( tmp_compare_left_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 47;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_3 = LOOKUP_ATTRIBUTE( tmp_source_name_36, const_str_plain_color );
    if ( tmp_compare_right_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_3 );

        exception_lineno = 47;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_cmp_NotEq_3 = RICH_COMPARE_BOOL_NE( tmp_compare_left_3, tmp_compare_right_3 );
    Py_DECREF( tmp_compare_left_3 );
    Py_DECREF( tmp_compare_right_3 );
    if ( tmp_cmp_NotEq_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 47;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_NotEq_3 == 1 )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_assattr_name_5 = Py_True;
    tmp_source_name_37 = GET_STRING_DICT_VALUE( moduledict_pieces$knight, (Nuitka_StringObject *)const_str_plain_board );

    if (unlikely( tmp_source_name_37 == NULL ))
    {
        tmp_source_name_37 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_board );
    }

    if ( tmp_source_name_37 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "board" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 48;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_37, const_str_plain_Grid );
    if ( tmp_called_name_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 48;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_25 = var_rowCount;

    if ( tmp_args_element_name_25 == NULL )
    {
        Py_DECREF( tmp_called_name_14 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "rowCount" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 48;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_26 = var_colCount;

    if ( tmp_args_element_name_26 == NULL )
    {
        Py_DECREF( tmp_called_name_14 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "colCount" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 48;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    frame_e8d473a2afdececce24eacfe11f0e0eb->m_frame.f_lineno = 48;
    {
        PyObject *call_args[] = { tmp_args_element_name_25, tmp_args_element_name_26 };
        tmp_assattr_target_5 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_14, call_args );
    }

    Py_DECREF( tmp_called_name_14 );
    if ( tmp_assattr_target_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 48;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_des, tmp_assattr_name_5 );
    Py_DECREF( tmp_assattr_target_5 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 48;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_6 = var_optionCounter;

    if ( tmp_assattr_name_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "optionCounter" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 49;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_38 = GET_STRING_DICT_VALUE( moduledict_pieces$knight, (Nuitka_StringObject *)const_str_plain_board );

    if (unlikely( tmp_source_name_38 == NULL ))
    {
        tmp_source_name_38 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_board );
    }

    if ( tmp_source_name_38 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "board" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 49;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_15 = LOOKUP_ATTRIBUTE( tmp_source_name_38, const_str_plain_Grid );
    if ( tmp_called_name_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 49;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_27 = var_rowCount;

    if ( tmp_args_element_name_27 == NULL )
    {
        Py_DECREF( tmp_called_name_15 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "rowCount" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 49;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_28 = var_colCount;

    if ( tmp_args_element_name_28 == NULL )
    {
        Py_DECREF( tmp_called_name_15 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "colCount" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 49;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    frame_e8d473a2afdececce24eacfe11f0e0eb->m_frame.f_lineno = 49;
    {
        PyObject *call_args[] = { tmp_args_element_name_27, tmp_args_element_name_28 };
        tmp_assattr_target_6 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_15, call_args );
    }

    Py_DECREF( tmp_called_name_15 );
    if ( tmp_assattr_target_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 49;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain_option, tmp_assattr_name_6 );
    Py_DECREF( tmp_assattr_target_6 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 49;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_9 = var_optionCounter;

    if ( tmp_left_name_9 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "optionCounter" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 50;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_9 = const_int_pos_1;
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_9, tmp_right_name_9 );
    tmp_assign_source_11 = tmp_left_name_9;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    var_optionCounter = tmp_assign_source_11;

    tmp_source_name_39 = var_availMoves;

    if ( tmp_source_name_39 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "availMoves" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 51;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_16 = LOOKUP_ATTRIBUTE( tmp_source_name_39, const_str_plain_append );
    if ( tmp_called_name_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 51;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_40 = GET_STRING_DICT_VALUE( moduledict_pieces$knight, (Nuitka_StringObject *)const_str_plain_board );

    if (unlikely( tmp_source_name_40 == NULL ))
    {
        tmp_source_name_40 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_board );
    }

    if ( tmp_source_name_40 == NULL )
    {
        Py_DECREF( tmp_called_name_16 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "board" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 51;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_17 = LOOKUP_ATTRIBUTE( tmp_source_name_40, const_str_plain_Grid );
    if ( tmp_called_name_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_16 );

        exception_lineno = 51;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_30 = var_rowCount;

    if ( tmp_args_element_name_30 == NULL )
    {
        Py_DECREF( tmp_called_name_16 );
        Py_DECREF( tmp_called_name_17 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "rowCount" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 51;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_31 = var_colCount;

    if ( tmp_args_element_name_31 == NULL )
    {
        Py_DECREF( tmp_called_name_16 );
        Py_DECREF( tmp_called_name_17 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "colCount" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 51;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    frame_e8d473a2afdececce24eacfe11f0e0eb->m_frame.f_lineno = 51;
    {
        PyObject *call_args[] = { tmp_args_element_name_30, tmp_args_element_name_31 };
        tmp_args_element_name_29 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_17, call_args );
    }

    Py_DECREF( tmp_called_name_17 );
    if ( tmp_args_element_name_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_16 );

        exception_lineno = 51;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    frame_e8d473a2afdececce24eacfe11f0e0eb->m_frame.f_lineno = 51;
    {
        PyObject *call_args[] = { tmp_args_element_name_29 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_16, call_args );
    }

    Py_DECREF( tmp_called_name_16 );
    Py_DECREF( tmp_args_element_name_29 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 51;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_42 = GET_STRING_DICT_VALUE( moduledict_pieces$knight, (Nuitka_StringObject *)const_str_plain_board );

    if (unlikely( tmp_source_name_42 == NULL ))
    {
        tmp_source_name_42 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_board );
    }

    if ( tmp_source_name_42 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "board" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 52;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_18 = LOOKUP_ATTRIBUTE( tmp_source_name_42, const_str_plain_Grid );
    if ( tmp_called_name_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 52;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_32 = var_rowCount;

    if ( tmp_args_element_name_32 == NULL )
    {
        Py_DECREF( tmp_called_name_18 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "rowCount" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 52;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_33 = var_colCount;

    if ( tmp_args_element_name_33 == NULL )
    {
        Py_DECREF( tmp_called_name_18 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "colCount" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 52;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    frame_e8d473a2afdececce24eacfe11f0e0eb->m_frame.f_lineno = 52;
    {
        PyObject *call_args[] = { tmp_args_element_name_32, tmp_args_element_name_33 };
        tmp_source_name_41 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_18, call_args );
    }

    Py_DECREF( tmp_called_name_18 );
    if ( tmp_source_name_41 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 52;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_bool_arg_3 = LOOKUP_ATTRIBUTE( tmp_source_name_41, const_str_plain_pieceStatus );
    Py_DECREF( tmp_source_name_41 );
    if ( tmp_bool_arg_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 52;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_unused = TO_BOOL( tmp_bool_arg_3 );
    Py_DECREF( tmp_bool_arg_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 52;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    branch_no_6:;
    branch_no_5:;
    tmp_source_name_43 = par_self;

    if ( tmp_source_name_43 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 56;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_43, const_str_plain_row );
    if ( tmp_left_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 56;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_10 = const_int_pos_1;
    tmp_assign_source_12 = BINARY_OPERATION_ADD( tmp_left_name_10, tmp_right_name_10 );
    Py_DECREF( tmp_left_name_10 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 56;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_rowCount;
        var_rowCount = tmp_assign_source_12;
        Py_XDECREF( old );
    }

    tmp_source_name_44 = par_self;

    if ( tmp_source_name_44 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 57;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_44, const_str_plain_col );
    if ( tmp_left_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 57;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_11 = const_int_pos_2;
    tmp_assign_source_13 = BINARY_OPERATION_ADD( tmp_left_name_11, tmp_right_name_11 );
    Py_DECREF( tmp_left_name_11 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 57;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_colCount;
        var_colCount = tmp_assign_source_13;
        Py_XDECREF( old );
    }

    tmp_source_name_45 = par_self;

    if ( tmp_source_name_45 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 58;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_left_7 = LOOKUP_ATTRIBUTE( tmp_source_name_45, const_str_plain_row );
    if ( tmp_compexpr_left_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_7 = const_int_pos_7;
    tmp_and_left_value_4 = RICH_COMPARE_LT( tmp_compexpr_left_7, tmp_compexpr_right_7 );
    Py_DECREF( tmp_compexpr_left_7 );
    if ( tmp_and_left_value_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_4 = CHECK_IF_TRUE( tmp_and_left_value_4 );
    if ( tmp_and_left_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_4 );

        exception_lineno = 58;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    if ( tmp_and_left_truth_4 == 1 )
    {
        goto and_right_4;
    }
    else
    {
        goto and_left_4;
    }
    and_right_4:;
    Py_DECREF( tmp_and_left_value_4 );
    tmp_source_name_46 = par_self;

    if ( tmp_source_name_46 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 58;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_left_8 = LOOKUP_ATTRIBUTE( tmp_source_name_46, const_str_plain_col );
    if ( tmp_compexpr_left_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_8 = const_int_pos_6;
    tmp_and_right_value_4 = RICH_COMPARE_LT( tmp_compexpr_left_8, tmp_compexpr_right_8 );
    Py_DECREF( tmp_compexpr_left_8 );
    if ( tmp_and_right_value_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_cond_value_4 = tmp_and_right_value_4;
    goto and_end_4;
    and_left_4:;
    tmp_cond_value_4 = tmp_and_left_value_4;
    and_end_4:;
    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_4 );

        exception_lineno = 58;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == 1 )
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_source_name_49 = GET_STRING_DICT_VALUE( moduledict_pieces$knight, (Nuitka_StringObject *)const_str_plain_board );

    if (unlikely( tmp_source_name_49 == NULL ))
    {
        tmp_source_name_49 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_board );
    }

    if ( tmp_source_name_49 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "board" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 59;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_19 = LOOKUP_ATTRIBUTE( tmp_source_name_49, const_str_plain_Grid );
    if ( tmp_called_name_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 59;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_34 = var_rowCount;

    if ( tmp_args_element_name_34 == NULL )
    {
        Py_DECREF( tmp_called_name_19 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "rowCount" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 59;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_35 = var_colCount;

    if ( tmp_args_element_name_35 == NULL )
    {
        Py_DECREF( tmp_called_name_19 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "colCount" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 59;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    frame_e8d473a2afdececce24eacfe11f0e0eb->m_frame.f_lineno = 59;
    {
        PyObject *call_args[] = { tmp_args_element_name_34, tmp_args_element_name_35 };
        tmp_source_name_48 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_19, call_args );
    }

    Py_DECREF( tmp_called_name_19 );
    if ( tmp_source_name_48 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 59;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_47 = LOOKUP_ATTRIBUTE( tmp_source_name_48, const_str_plain_piece );
    Py_DECREF( tmp_source_name_48 );
    if ( tmp_source_name_47 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 59;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_compare_left_4 = LOOKUP_ATTRIBUTE( tmp_source_name_47, const_str_plain_color );
    Py_DECREF( tmp_source_name_47 );
    if ( tmp_compare_left_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 59;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_50 = par_self;

    if ( tmp_source_name_50 == NULL )
    {
        Py_DECREF( tmp_compare_left_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 59;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_4 = LOOKUP_ATTRIBUTE( tmp_source_name_50, const_str_plain_color );
    if ( tmp_compare_right_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_4 );

        exception_lineno = 59;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_cmp_NotEq_4 = RICH_COMPARE_BOOL_NE( tmp_compare_left_4, tmp_compare_right_4 );
    Py_DECREF( tmp_compare_left_4 );
    Py_DECREF( tmp_compare_right_4 );
    if ( tmp_cmp_NotEq_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 59;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_NotEq_4 == 1 )
    {
        goto branch_yes_8;
    }
    else
    {
        goto branch_no_8;
    }
    branch_yes_8:;
    tmp_assattr_name_7 = Py_True;
    tmp_source_name_51 = GET_STRING_DICT_VALUE( moduledict_pieces$knight, (Nuitka_StringObject *)const_str_plain_board );

    if (unlikely( tmp_source_name_51 == NULL ))
    {
        tmp_source_name_51 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_board );
    }

    if ( tmp_source_name_51 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "board" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 60;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_20 = LOOKUP_ATTRIBUTE( tmp_source_name_51, const_str_plain_Grid );
    if ( tmp_called_name_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_36 = var_rowCount;

    if ( tmp_args_element_name_36 == NULL )
    {
        Py_DECREF( tmp_called_name_20 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "rowCount" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 60;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_37 = var_colCount;

    if ( tmp_args_element_name_37 == NULL )
    {
        Py_DECREF( tmp_called_name_20 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "colCount" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 60;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    frame_e8d473a2afdececce24eacfe11f0e0eb->m_frame.f_lineno = 60;
    {
        PyObject *call_args[] = { tmp_args_element_name_36, tmp_args_element_name_37 };
        tmp_assattr_target_7 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_20, call_args );
    }

    Py_DECREF( tmp_called_name_20 );
    if ( tmp_assattr_target_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_7, const_str_plain_des, tmp_assattr_name_7 );
    Py_DECREF( tmp_assattr_target_7 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_8 = var_optionCounter;

    if ( tmp_assattr_name_8 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "optionCounter" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 61;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_52 = GET_STRING_DICT_VALUE( moduledict_pieces$knight, (Nuitka_StringObject *)const_str_plain_board );

    if (unlikely( tmp_source_name_52 == NULL ))
    {
        tmp_source_name_52 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_board );
    }

    if ( tmp_source_name_52 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "board" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 61;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_21 = LOOKUP_ATTRIBUTE( tmp_source_name_52, const_str_plain_Grid );
    if ( tmp_called_name_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 61;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_38 = var_rowCount;

    if ( tmp_args_element_name_38 == NULL )
    {
        Py_DECREF( tmp_called_name_21 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "rowCount" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 61;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_39 = var_colCount;

    if ( tmp_args_element_name_39 == NULL )
    {
        Py_DECREF( tmp_called_name_21 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "colCount" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 61;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    frame_e8d473a2afdececce24eacfe11f0e0eb->m_frame.f_lineno = 61;
    {
        PyObject *call_args[] = { tmp_args_element_name_38, tmp_args_element_name_39 };
        tmp_assattr_target_8 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_21, call_args );
    }

    Py_DECREF( tmp_called_name_21 );
    if ( tmp_assattr_target_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 61;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_8, const_str_plain_option, tmp_assattr_name_8 );
    Py_DECREF( tmp_assattr_target_8 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 61;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_12 = var_optionCounter;

    if ( tmp_left_name_12 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "optionCounter" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 62;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_12 = const_int_pos_1;
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_12, tmp_right_name_12 );
    tmp_assign_source_14 = tmp_left_name_12;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    var_optionCounter = tmp_assign_source_14;

    tmp_source_name_53 = var_availMoves;

    if ( tmp_source_name_53 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "availMoves" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 63;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_22 = LOOKUP_ATTRIBUTE( tmp_source_name_53, const_str_plain_append );
    if ( tmp_called_name_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 63;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_54 = GET_STRING_DICT_VALUE( moduledict_pieces$knight, (Nuitka_StringObject *)const_str_plain_board );

    if (unlikely( tmp_source_name_54 == NULL ))
    {
        tmp_source_name_54 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_board );
    }

    if ( tmp_source_name_54 == NULL )
    {
        Py_DECREF( tmp_called_name_22 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "board" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 63;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_23 = LOOKUP_ATTRIBUTE( tmp_source_name_54, const_str_plain_Grid );
    if ( tmp_called_name_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_22 );

        exception_lineno = 63;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_41 = var_rowCount;

    if ( tmp_args_element_name_41 == NULL )
    {
        Py_DECREF( tmp_called_name_22 );
        Py_DECREF( tmp_called_name_23 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "rowCount" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 63;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_42 = var_colCount;

    if ( tmp_args_element_name_42 == NULL )
    {
        Py_DECREF( tmp_called_name_22 );
        Py_DECREF( tmp_called_name_23 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "colCount" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 63;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    frame_e8d473a2afdececce24eacfe11f0e0eb->m_frame.f_lineno = 63;
    {
        PyObject *call_args[] = { tmp_args_element_name_41, tmp_args_element_name_42 };
        tmp_args_element_name_40 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_23, call_args );
    }

    Py_DECREF( tmp_called_name_23 );
    if ( tmp_args_element_name_40 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_22 );

        exception_lineno = 63;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    frame_e8d473a2afdececce24eacfe11f0e0eb->m_frame.f_lineno = 63;
    {
        PyObject *call_args[] = { tmp_args_element_name_40 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_22, call_args );
    }

    Py_DECREF( tmp_called_name_22 );
    Py_DECREF( tmp_args_element_name_40 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 63;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_56 = GET_STRING_DICT_VALUE( moduledict_pieces$knight, (Nuitka_StringObject *)const_str_plain_board );

    if (unlikely( tmp_source_name_56 == NULL ))
    {
        tmp_source_name_56 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_board );
    }

    if ( tmp_source_name_56 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "board" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 64;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_24 = LOOKUP_ATTRIBUTE( tmp_source_name_56, const_str_plain_Grid );
    if ( tmp_called_name_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_43 = var_rowCount;

    if ( tmp_args_element_name_43 == NULL )
    {
        Py_DECREF( tmp_called_name_24 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "rowCount" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 64;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_44 = var_colCount;

    if ( tmp_args_element_name_44 == NULL )
    {
        Py_DECREF( tmp_called_name_24 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "colCount" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 64;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    frame_e8d473a2afdececce24eacfe11f0e0eb->m_frame.f_lineno = 64;
    {
        PyObject *call_args[] = { tmp_args_element_name_43, tmp_args_element_name_44 };
        tmp_source_name_55 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_24, call_args );
    }

    Py_DECREF( tmp_called_name_24 );
    if ( tmp_source_name_55 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_bool_arg_4 = LOOKUP_ATTRIBUTE( tmp_source_name_55, const_str_plain_pieceStatus );
    Py_DECREF( tmp_source_name_55 );
    if ( tmp_bool_arg_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_unused = TO_BOOL( tmp_bool_arg_4 );
    Py_DECREF( tmp_bool_arg_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    branch_no_8:;
    branch_no_7:;
    tmp_source_name_57 = par_self;

    if ( tmp_source_name_57 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 68;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_57, const_str_plain_row );
    if ( tmp_left_name_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 68;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_13 = const_int_pos_2;
    tmp_assign_source_15 = BINARY_OPERATION_ADD( tmp_left_name_13, tmp_right_name_13 );
    Py_DECREF( tmp_left_name_13 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 68;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_rowCount;
        var_rowCount = tmp_assign_source_15;
        Py_XDECREF( old );
    }

    tmp_source_name_58 = par_self;

    if ( tmp_source_name_58 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 69;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_58, const_str_plain_col );
    if ( tmp_left_name_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 69;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_14 = const_int_pos_1;
    tmp_assign_source_16 = BINARY_OPERATION_ADD( tmp_left_name_14, tmp_right_name_14 );
    Py_DECREF( tmp_left_name_14 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 69;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_colCount;
        var_colCount = tmp_assign_source_16;
        Py_XDECREF( old );
    }

    tmp_source_name_59 = par_self;

    if ( tmp_source_name_59 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 70;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_left_9 = LOOKUP_ATTRIBUTE( tmp_source_name_59, const_str_plain_row );
    if ( tmp_compexpr_left_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 70;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_9 = const_int_pos_6;
    tmp_and_left_value_5 = RICH_COMPARE_LT( tmp_compexpr_left_9, tmp_compexpr_right_9 );
    Py_DECREF( tmp_compexpr_left_9 );
    if ( tmp_and_left_value_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 70;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_5 = CHECK_IF_TRUE( tmp_and_left_value_5 );
    if ( tmp_and_left_truth_5 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_5 );

        exception_lineno = 70;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    if ( tmp_and_left_truth_5 == 1 )
    {
        goto and_right_5;
    }
    else
    {
        goto and_left_5;
    }
    and_right_5:;
    Py_DECREF( tmp_and_left_value_5 );
    tmp_source_name_60 = par_self;

    if ( tmp_source_name_60 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 70;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_left_10 = LOOKUP_ATTRIBUTE( tmp_source_name_60, const_str_plain_col );
    if ( tmp_compexpr_left_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 70;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_10 = const_int_pos_7;
    tmp_and_right_value_5 = RICH_COMPARE_LT( tmp_compexpr_left_10, tmp_compexpr_right_10 );
    Py_DECREF( tmp_compexpr_left_10 );
    if ( tmp_and_right_value_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 70;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_cond_value_5 = tmp_and_right_value_5;
    goto and_end_5;
    and_left_5:;
    tmp_cond_value_5 = tmp_and_left_value_5;
    and_end_5:;
    tmp_cond_truth_5 = CHECK_IF_TRUE( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_5 );

        exception_lineno = 70;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == 1 )
    {
        goto branch_yes_9;
    }
    else
    {
        goto branch_no_9;
    }
    branch_yes_9:;
    tmp_source_name_63 = GET_STRING_DICT_VALUE( moduledict_pieces$knight, (Nuitka_StringObject *)const_str_plain_board );

    if (unlikely( tmp_source_name_63 == NULL ))
    {
        tmp_source_name_63 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_board );
    }

    if ( tmp_source_name_63 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "board" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 71;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_25 = LOOKUP_ATTRIBUTE( tmp_source_name_63, const_str_plain_Grid );
    if ( tmp_called_name_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 71;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_45 = var_rowCount;

    if ( tmp_args_element_name_45 == NULL )
    {
        Py_DECREF( tmp_called_name_25 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "rowCount" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 71;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_46 = var_colCount;

    if ( tmp_args_element_name_46 == NULL )
    {
        Py_DECREF( tmp_called_name_25 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "colCount" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 71;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    frame_e8d473a2afdececce24eacfe11f0e0eb->m_frame.f_lineno = 71;
    {
        PyObject *call_args[] = { tmp_args_element_name_45, tmp_args_element_name_46 };
        tmp_source_name_62 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_25, call_args );
    }

    Py_DECREF( tmp_called_name_25 );
    if ( tmp_source_name_62 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 71;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_61 = LOOKUP_ATTRIBUTE( tmp_source_name_62, const_str_plain_piece );
    Py_DECREF( tmp_source_name_62 );
    if ( tmp_source_name_61 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 71;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_compare_left_5 = LOOKUP_ATTRIBUTE( tmp_source_name_61, const_str_plain_color );
    Py_DECREF( tmp_source_name_61 );
    if ( tmp_compare_left_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 71;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_64 = par_self;

    if ( tmp_source_name_64 == NULL )
    {
        Py_DECREF( tmp_compare_left_5 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 71;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_5 = LOOKUP_ATTRIBUTE( tmp_source_name_64, const_str_plain_color );
    if ( tmp_compare_right_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_5 );

        exception_lineno = 71;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_cmp_NotEq_5 = RICH_COMPARE_BOOL_NE( tmp_compare_left_5, tmp_compare_right_5 );
    Py_DECREF( tmp_compare_left_5 );
    Py_DECREF( tmp_compare_right_5 );
    if ( tmp_cmp_NotEq_5 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 71;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_NotEq_5 == 1 )
    {
        goto branch_yes_10;
    }
    else
    {
        goto branch_no_10;
    }
    branch_yes_10:;
    tmp_assattr_name_9 = Py_True;
    tmp_source_name_65 = GET_STRING_DICT_VALUE( moduledict_pieces$knight, (Nuitka_StringObject *)const_str_plain_board );

    if (unlikely( tmp_source_name_65 == NULL ))
    {
        tmp_source_name_65 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_board );
    }

    if ( tmp_source_name_65 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "board" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 72;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_26 = LOOKUP_ATTRIBUTE( tmp_source_name_65, const_str_plain_Grid );
    if ( tmp_called_name_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 72;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_47 = var_rowCount;

    if ( tmp_args_element_name_47 == NULL )
    {
        Py_DECREF( tmp_called_name_26 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "rowCount" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 72;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_48 = var_colCount;

    if ( tmp_args_element_name_48 == NULL )
    {
        Py_DECREF( tmp_called_name_26 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "colCount" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 72;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    frame_e8d473a2afdececce24eacfe11f0e0eb->m_frame.f_lineno = 72;
    {
        PyObject *call_args[] = { tmp_args_element_name_47, tmp_args_element_name_48 };
        tmp_assattr_target_9 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_26, call_args );
    }

    Py_DECREF( tmp_called_name_26 );
    if ( tmp_assattr_target_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 72;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_9, const_str_plain_des, tmp_assattr_name_9 );
    Py_DECREF( tmp_assattr_target_9 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 72;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_10 = var_optionCounter;

    if ( tmp_assattr_name_10 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "optionCounter" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 73;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_66 = GET_STRING_DICT_VALUE( moduledict_pieces$knight, (Nuitka_StringObject *)const_str_plain_board );

    if (unlikely( tmp_source_name_66 == NULL ))
    {
        tmp_source_name_66 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_board );
    }

    if ( tmp_source_name_66 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "board" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 73;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_27 = LOOKUP_ATTRIBUTE( tmp_source_name_66, const_str_plain_Grid );
    if ( tmp_called_name_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 73;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_49 = var_rowCount;

    if ( tmp_args_element_name_49 == NULL )
    {
        Py_DECREF( tmp_called_name_27 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "rowCount" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 73;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_50 = var_colCount;

    if ( tmp_args_element_name_50 == NULL )
    {
        Py_DECREF( tmp_called_name_27 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "colCount" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 73;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    frame_e8d473a2afdececce24eacfe11f0e0eb->m_frame.f_lineno = 73;
    {
        PyObject *call_args[] = { tmp_args_element_name_49, tmp_args_element_name_50 };
        tmp_assattr_target_10 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_27, call_args );
    }

    Py_DECREF( tmp_called_name_27 );
    if ( tmp_assattr_target_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 73;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_10, const_str_plain_option, tmp_assattr_name_10 );
    Py_DECREF( tmp_assattr_target_10 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 73;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_15 = var_optionCounter;

    if ( tmp_left_name_15 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "optionCounter" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 74;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_15 = const_int_pos_1;
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_15, tmp_right_name_15 );
    tmp_assign_source_17 = tmp_left_name_15;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 74;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    var_optionCounter = tmp_assign_source_17;

    tmp_source_name_67 = var_availMoves;

    if ( tmp_source_name_67 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "availMoves" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 75;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_28 = LOOKUP_ATTRIBUTE( tmp_source_name_67, const_str_plain_append );
    if ( tmp_called_name_28 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 75;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_68 = GET_STRING_DICT_VALUE( moduledict_pieces$knight, (Nuitka_StringObject *)const_str_plain_board );

    if (unlikely( tmp_source_name_68 == NULL ))
    {
        tmp_source_name_68 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_board );
    }

    if ( tmp_source_name_68 == NULL )
    {
        Py_DECREF( tmp_called_name_28 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "board" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 75;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_29 = LOOKUP_ATTRIBUTE( tmp_source_name_68, const_str_plain_Grid );
    if ( tmp_called_name_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_28 );

        exception_lineno = 75;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_52 = var_rowCount;

    if ( tmp_args_element_name_52 == NULL )
    {
        Py_DECREF( tmp_called_name_28 );
        Py_DECREF( tmp_called_name_29 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "rowCount" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 75;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_53 = var_colCount;

    if ( tmp_args_element_name_53 == NULL )
    {
        Py_DECREF( tmp_called_name_28 );
        Py_DECREF( tmp_called_name_29 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "colCount" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 75;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    frame_e8d473a2afdececce24eacfe11f0e0eb->m_frame.f_lineno = 75;
    {
        PyObject *call_args[] = { tmp_args_element_name_52, tmp_args_element_name_53 };
        tmp_args_element_name_51 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_29, call_args );
    }

    Py_DECREF( tmp_called_name_29 );
    if ( tmp_args_element_name_51 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_28 );

        exception_lineno = 75;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    frame_e8d473a2afdececce24eacfe11f0e0eb->m_frame.f_lineno = 75;
    {
        PyObject *call_args[] = { tmp_args_element_name_51 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_28, call_args );
    }

    Py_DECREF( tmp_called_name_28 );
    Py_DECREF( tmp_args_element_name_51 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 75;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_70 = GET_STRING_DICT_VALUE( moduledict_pieces$knight, (Nuitka_StringObject *)const_str_plain_board );

    if (unlikely( tmp_source_name_70 == NULL ))
    {
        tmp_source_name_70 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_board );
    }

    if ( tmp_source_name_70 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "board" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 76;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_30 = LOOKUP_ATTRIBUTE( tmp_source_name_70, const_str_plain_Grid );
    if ( tmp_called_name_30 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 76;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_54 = var_rowCount;

    if ( tmp_args_element_name_54 == NULL )
    {
        Py_DECREF( tmp_called_name_30 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "rowCount" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 76;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_55 = var_colCount;

    if ( tmp_args_element_name_55 == NULL )
    {
        Py_DECREF( tmp_called_name_30 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "colCount" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 76;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    frame_e8d473a2afdececce24eacfe11f0e0eb->m_frame.f_lineno = 76;
    {
        PyObject *call_args[] = { tmp_args_element_name_54, tmp_args_element_name_55 };
        tmp_source_name_69 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_30, call_args );
    }

    Py_DECREF( tmp_called_name_30 );
    if ( tmp_source_name_69 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 76;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_bool_arg_5 = LOOKUP_ATTRIBUTE( tmp_source_name_69, const_str_plain_pieceStatus );
    Py_DECREF( tmp_source_name_69 );
    if ( tmp_bool_arg_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 76;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_unused = TO_BOOL( tmp_bool_arg_5 );
    Py_DECREF( tmp_bool_arg_5 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 76;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    branch_no_10:;
    branch_no_9:;
    tmp_source_name_71 = par_self;

    if ( tmp_source_name_71 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 80;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_16 = LOOKUP_ATTRIBUTE( tmp_source_name_71, const_str_plain_row );
    if ( tmp_left_name_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_16 = const_int_pos_2;
    tmp_assign_source_18 = BINARY_OPERATION_ADD( tmp_left_name_16, tmp_right_name_16 );
    Py_DECREF( tmp_left_name_16 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_rowCount;
        var_rowCount = tmp_assign_source_18;
        Py_XDECREF( old );
    }

    tmp_source_name_72 = par_self;

    if ( tmp_source_name_72 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 81;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_17 = LOOKUP_ATTRIBUTE( tmp_source_name_72, const_str_plain_col );
    if ( tmp_left_name_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 81;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_17 = const_int_pos_1;
    tmp_assign_source_19 = BINARY_OPERATION_SUB( tmp_left_name_17, tmp_right_name_17 );
    Py_DECREF( tmp_left_name_17 );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 81;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_colCount;
        var_colCount = tmp_assign_source_19;
        Py_XDECREF( old );
    }

    tmp_source_name_73 = par_self;

    if ( tmp_source_name_73 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 82;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_left_11 = LOOKUP_ATTRIBUTE( tmp_source_name_73, const_str_plain_row );
    if ( tmp_compexpr_left_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_11 = const_int_pos_6;
    tmp_and_left_value_6 = RICH_COMPARE_LT( tmp_compexpr_left_11, tmp_compexpr_right_11 );
    Py_DECREF( tmp_compexpr_left_11 );
    if ( tmp_and_left_value_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_6 = CHECK_IF_TRUE( tmp_and_left_value_6 );
    if ( tmp_and_left_truth_6 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_6 );

        exception_lineno = 82;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    if ( tmp_and_left_truth_6 == 1 )
    {
        goto and_right_6;
    }
    else
    {
        goto and_left_6;
    }
    and_right_6:;
    Py_DECREF( tmp_and_left_value_6 );
    tmp_source_name_74 = par_self;

    if ( tmp_source_name_74 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 82;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_left_12 = LOOKUP_ATTRIBUTE( tmp_source_name_74, const_str_plain_col );
    if ( tmp_compexpr_left_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_12 = const_int_0;
    tmp_and_right_value_6 = RICH_COMPARE_GT( tmp_compexpr_left_12, tmp_compexpr_right_12 );
    Py_DECREF( tmp_compexpr_left_12 );
    if ( tmp_and_right_value_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_cond_value_6 = tmp_and_right_value_6;
    goto and_end_6;
    and_left_6:;
    tmp_cond_value_6 = tmp_and_left_value_6;
    and_end_6:;
    tmp_cond_truth_6 = CHECK_IF_TRUE( tmp_cond_value_6 );
    if ( tmp_cond_truth_6 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_6 );

        exception_lineno = 82;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_6 );
    if ( tmp_cond_truth_6 == 1 )
    {
        goto branch_yes_11;
    }
    else
    {
        goto branch_no_11;
    }
    branch_yes_11:;
    tmp_source_name_77 = GET_STRING_DICT_VALUE( moduledict_pieces$knight, (Nuitka_StringObject *)const_str_plain_board );

    if (unlikely( tmp_source_name_77 == NULL ))
    {
        tmp_source_name_77 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_board );
    }

    if ( tmp_source_name_77 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "board" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 83;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_31 = LOOKUP_ATTRIBUTE( tmp_source_name_77, const_str_plain_Grid );
    if ( tmp_called_name_31 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 83;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_56 = var_rowCount;

    if ( tmp_args_element_name_56 == NULL )
    {
        Py_DECREF( tmp_called_name_31 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "rowCount" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 83;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_57 = var_colCount;

    if ( tmp_args_element_name_57 == NULL )
    {
        Py_DECREF( tmp_called_name_31 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "colCount" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 83;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    frame_e8d473a2afdececce24eacfe11f0e0eb->m_frame.f_lineno = 83;
    {
        PyObject *call_args[] = { tmp_args_element_name_56, tmp_args_element_name_57 };
        tmp_source_name_76 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_31, call_args );
    }

    Py_DECREF( tmp_called_name_31 );
    if ( tmp_source_name_76 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 83;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_75 = LOOKUP_ATTRIBUTE( tmp_source_name_76, const_str_plain_piece );
    Py_DECREF( tmp_source_name_76 );
    if ( tmp_source_name_75 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 83;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_compare_left_6 = LOOKUP_ATTRIBUTE( tmp_source_name_75, const_str_plain_color );
    Py_DECREF( tmp_source_name_75 );
    if ( tmp_compare_left_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 83;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_78 = par_self;

    if ( tmp_source_name_78 == NULL )
    {
        Py_DECREF( tmp_compare_left_6 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 83;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_6 = LOOKUP_ATTRIBUTE( tmp_source_name_78, const_str_plain_color );
    if ( tmp_compare_right_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_6 );

        exception_lineno = 83;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_cmp_NotEq_6 = RICH_COMPARE_BOOL_NE( tmp_compare_left_6, tmp_compare_right_6 );
    Py_DECREF( tmp_compare_left_6 );
    Py_DECREF( tmp_compare_right_6 );
    if ( tmp_cmp_NotEq_6 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 83;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_NotEq_6 == 1 )
    {
        goto branch_yes_12;
    }
    else
    {
        goto branch_no_12;
    }
    branch_yes_12:;
    tmp_assattr_name_11 = Py_True;
    tmp_source_name_79 = GET_STRING_DICT_VALUE( moduledict_pieces$knight, (Nuitka_StringObject *)const_str_plain_board );

    if (unlikely( tmp_source_name_79 == NULL ))
    {
        tmp_source_name_79 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_board );
    }

    if ( tmp_source_name_79 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "board" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 84;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_32 = LOOKUP_ATTRIBUTE( tmp_source_name_79, const_str_plain_Grid );
    if ( tmp_called_name_32 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_58 = var_rowCount;

    if ( tmp_args_element_name_58 == NULL )
    {
        Py_DECREF( tmp_called_name_32 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "rowCount" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 84;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_59 = var_colCount;

    if ( tmp_args_element_name_59 == NULL )
    {
        Py_DECREF( tmp_called_name_32 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "colCount" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 84;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    frame_e8d473a2afdececce24eacfe11f0e0eb->m_frame.f_lineno = 84;
    {
        PyObject *call_args[] = { tmp_args_element_name_58, tmp_args_element_name_59 };
        tmp_assattr_target_11 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_32, call_args );
    }

    Py_DECREF( tmp_called_name_32 );
    if ( tmp_assattr_target_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_11, const_str_plain_des, tmp_assattr_name_11 );
    Py_DECREF( tmp_assattr_target_11 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_12 = var_optionCounter;

    if ( tmp_assattr_name_12 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "optionCounter" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 85;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_80 = GET_STRING_DICT_VALUE( moduledict_pieces$knight, (Nuitka_StringObject *)const_str_plain_board );

    if (unlikely( tmp_source_name_80 == NULL ))
    {
        tmp_source_name_80 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_board );
    }

    if ( tmp_source_name_80 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "board" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 85;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_33 = LOOKUP_ATTRIBUTE( tmp_source_name_80, const_str_plain_Grid );
    if ( tmp_called_name_33 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 85;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_60 = var_rowCount;

    if ( tmp_args_element_name_60 == NULL )
    {
        Py_DECREF( tmp_called_name_33 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "rowCount" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 85;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_61 = var_colCount;

    if ( tmp_args_element_name_61 == NULL )
    {
        Py_DECREF( tmp_called_name_33 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "colCount" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 85;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    frame_e8d473a2afdececce24eacfe11f0e0eb->m_frame.f_lineno = 85;
    {
        PyObject *call_args[] = { tmp_args_element_name_60, tmp_args_element_name_61 };
        tmp_assattr_target_12 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_33, call_args );
    }

    Py_DECREF( tmp_called_name_33 );
    if ( tmp_assattr_target_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 85;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_12, const_str_plain_option, tmp_assattr_name_12 );
    Py_DECREF( tmp_assattr_target_12 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 85;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_18 = var_optionCounter;

    if ( tmp_left_name_18 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "optionCounter" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 86;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_18 = const_int_pos_1;
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_18, tmp_right_name_18 );
    tmp_assign_source_20 = tmp_left_name_18;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 86;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    var_optionCounter = tmp_assign_source_20;

    tmp_source_name_81 = var_availMoves;

    if ( tmp_source_name_81 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "availMoves" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 87;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_34 = LOOKUP_ATTRIBUTE( tmp_source_name_81, const_str_plain_append );
    if ( tmp_called_name_34 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 87;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_82 = GET_STRING_DICT_VALUE( moduledict_pieces$knight, (Nuitka_StringObject *)const_str_plain_board );

    if (unlikely( tmp_source_name_82 == NULL ))
    {
        tmp_source_name_82 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_board );
    }

    if ( tmp_source_name_82 == NULL )
    {
        Py_DECREF( tmp_called_name_34 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "board" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 87;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_35 = LOOKUP_ATTRIBUTE( tmp_source_name_82, const_str_plain_Grid );
    if ( tmp_called_name_35 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_34 );

        exception_lineno = 87;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_63 = var_rowCount;

    if ( tmp_args_element_name_63 == NULL )
    {
        Py_DECREF( tmp_called_name_34 );
        Py_DECREF( tmp_called_name_35 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "rowCount" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 87;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_64 = var_colCount;

    if ( tmp_args_element_name_64 == NULL )
    {
        Py_DECREF( tmp_called_name_34 );
        Py_DECREF( tmp_called_name_35 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "colCount" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 87;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    frame_e8d473a2afdececce24eacfe11f0e0eb->m_frame.f_lineno = 87;
    {
        PyObject *call_args[] = { tmp_args_element_name_63, tmp_args_element_name_64 };
        tmp_args_element_name_62 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_35, call_args );
    }

    Py_DECREF( tmp_called_name_35 );
    if ( tmp_args_element_name_62 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_34 );

        exception_lineno = 87;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    frame_e8d473a2afdececce24eacfe11f0e0eb->m_frame.f_lineno = 87;
    {
        PyObject *call_args[] = { tmp_args_element_name_62 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_34, call_args );
    }

    Py_DECREF( tmp_called_name_34 );
    Py_DECREF( tmp_args_element_name_62 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 87;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_84 = GET_STRING_DICT_VALUE( moduledict_pieces$knight, (Nuitka_StringObject *)const_str_plain_board );

    if (unlikely( tmp_source_name_84 == NULL ))
    {
        tmp_source_name_84 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_board );
    }

    if ( tmp_source_name_84 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "board" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 88;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_36 = LOOKUP_ATTRIBUTE( tmp_source_name_84, const_str_plain_Grid );
    if ( tmp_called_name_36 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 88;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_65 = var_rowCount;

    if ( tmp_args_element_name_65 == NULL )
    {
        Py_DECREF( tmp_called_name_36 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "rowCount" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 88;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_66 = var_colCount;

    if ( tmp_args_element_name_66 == NULL )
    {
        Py_DECREF( tmp_called_name_36 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "colCount" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 88;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    frame_e8d473a2afdececce24eacfe11f0e0eb->m_frame.f_lineno = 88;
    {
        PyObject *call_args[] = { tmp_args_element_name_65, tmp_args_element_name_66 };
        tmp_source_name_83 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_36, call_args );
    }

    Py_DECREF( tmp_called_name_36 );
    if ( tmp_source_name_83 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 88;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_bool_arg_6 = LOOKUP_ATTRIBUTE( tmp_source_name_83, const_str_plain_pieceStatus );
    Py_DECREF( tmp_source_name_83 );
    if ( tmp_bool_arg_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 88;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_unused = TO_BOOL( tmp_bool_arg_6 );
    Py_DECREF( tmp_bool_arg_6 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 88;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    branch_no_12:;
    branch_no_11:;
    tmp_source_name_85 = par_self;

    if ( tmp_source_name_85 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 92;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_19 = LOOKUP_ATTRIBUTE( tmp_source_name_85, const_str_plain_row );
    if ( tmp_left_name_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 92;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_19 = const_int_pos_1;
    tmp_assign_source_21 = BINARY_OPERATION_ADD( tmp_left_name_19, tmp_right_name_19 );
    Py_DECREF( tmp_left_name_19 );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 92;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_rowCount;
        var_rowCount = tmp_assign_source_21;
        Py_XDECREF( old );
    }

    tmp_source_name_86 = par_self;

    if ( tmp_source_name_86 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 93;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_20 = LOOKUP_ATTRIBUTE( tmp_source_name_86, const_str_plain_col );
    if ( tmp_left_name_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 93;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_20 = const_int_pos_2;
    tmp_assign_source_22 = BINARY_OPERATION_SUB( tmp_left_name_20, tmp_right_name_20 );
    Py_DECREF( tmp_left_name_20 );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 93;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_colCount;
        var_colCount = tmp_assign_source_22;
        Py_XDECREF( old );
    }

    tmp_source_name_87 = par_self;

    if ( tmp_source_name_87 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 94;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_left_13 = LOOKUP_ATTRIBUTE( tmp_source_name_87, const_str_plain_row );
    if ( tmp_compexpr_left_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 94;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_13 = const_int_pos_7;
    tmp_and_left_value_7 = RICH_COMPARE_LT( tmp_compexpr_left_13, tmp_compexpr_right_13 );
    Py_DECREF( tmp_compexpr_left_13 );
    if ( tmp_and_left_value_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 94;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_7 = CHECK_IF_TRUE( tmp_and_left_value_7 );
    if ( tmp_and_left_truth_7 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_7 );

        exception_lineno = 94;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    if ( tmp_and_left_truth_7 == 1 )
    {
        goto and_right_7;
    }
    else
    {
        goto and_left_7;
    }
    and_right_7:;
    Py_DECREF( tmp_and_left_value_7 );
    tmp_source_name_88 = par_self;

    if ( tmp_source_name_88 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 94;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_left_14 = LOOKUP_ATTRIBUTE( tmp_source_name_88, const_str_plain_col );
    if ( tmp_compexpr_left_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 94;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_14 = const_int_pos_1;
    tmp_and_right_value_7 = RICH_COMPARE_GT( tmp_compexpr_left_14, tmp_compexpr_right_14 );
    Py_DECREF( tmp_compexpr_left_14 );
    if ( tmp_and_right_value_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 94;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_cond_value_7 = tmp_and_right_value_7;
    goto and_end_7;
    and_left_7:;
    tmp_cond_value_7 = tmp_and_left_value_7;
    and_end_7:;
    tmp_cond_truth_7 = CHECK_IF_TRUE( tmp_cond_value_7 );
    if ( tmp_cond_truth_7 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_7 );

        exception_lineno = 94;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_7 );
    if ( tmp_cond_truth_7 == 1 )
    {
        goto branch_yes_13;
    }
    else
    {
        goto branch_no_13;
    }
    branch_yes_13:;
    tmp_source_name_91 = GET_STRING_DICT_VALUE( moduledict_pieces$knight, (Nuitka_StringObject *)const_str_plain_board );

    if (unlikely( tmp_source_name_91 == NULL ))
    {
        tmp_source_name_91 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_board );
    }

    if ( tmp_source_name_91 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "board" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 95;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_37 = LOOKUP_ATTRIBUTE( tmp_source_name_91, const_str_plain_Grid );
    if ( tmp_called_name_37 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 95;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_67 = var_rowCount;

    if ( tmp_args_element_name_67 == NULL )
    {
        Py_DECREF( tmp_called_name_37 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "rowCount" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 95;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_68 = var_colCount;

    if ( tmp_args_element_name_68 == NULL )
    {
        Py_DECREF( tmp_called_name_37 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "colCount" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 95;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    frame_e8d473a2afdececce24eacfe11f0e0eb->m_frame.f_lineno = 95;
    {
        PyObject *call_args[] = { tmp_args_element_name_67, tmp_args_element_name_68 };
        tmp_source_name_90 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_37, call_args );
    }

    Py_DECREF( tmp_called_name_37 );
    if ( tmp_source_name_90 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 95;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_89 = LOOKUP_ATTRIBUTE( tmp_source_name_90, const_str_plain_piece );
    Py_DECREF( tmp_source_name_90 );
    if ( tmp_source_name_89 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 95;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_compare_left_7 = LOOKUP_ATTRIBUTE( tmp_source_name_89, const_str_plain_color );
    Py_DECREF( tmp_source_name_89 );
    if ( tmp_compare_left_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 95;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_92 = par_self;

    if ( tmp_source_name_92 == NULL )
    {
        Py_DECREF( tmp_compare_left_7 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 95;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_7 = LOOKUP_ATTRIBUTE( tmp_source_name_92, const_str_plain_color );
    if ( tmp_compare_right_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_7 );

        exception_lineno = 95;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_cmp_NotEq_7 = RICH_COMPARE_BOOL_NE( tmp_compare_left_7, tmp_compare_right_7 );
    Py_DECREF( tmp_compare_left_7 );
    Py_DECREF( tmp_compare_right_7 );
    if ( tmp_cmp_NotEq_7 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 95;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_NotEq_7 == 1 )
    {
        goto branch_yes_14;
    }
    else
    {
        goto branch_no_14;
    }
    branch_yes_14:;
    tmp_assattr_name_13 = Py_True;
    tmp_source_name_93 = GET_STRING_DICT_VALUE( moduledict_pieces$knight, (Nuitka_StringObject *)const_str_plain_board );

    if (unlikely( tmp_source_name_93 == NULL ))
    {
        tmp_source_name_93 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_board );
    }

    if ( tmp_source_name_93 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "board" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 96;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_38 = LOOKUP_ATTRIBUTE( tmp_source_name_93, const_str_plain_Grid );
    if ( tmp_called_name_38 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 96;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_69 = var_rowCount;

    if ( tmp_args_element_name_69 == NULL )
    {
        Py_DECREF( tmp_called_name_38 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "rowCount" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 96;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_70 = var_colCount;

    if ( tmp_args_element_name_70 == NULL )
    {
        Py_DECREF( tmp_called_name_38 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "colCount" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 96;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    frame_e8d473a2afdececce24eacfe11f0e0eb->m_frame.f_lineno = 96;
    {
        PyObject *call_args[] = { tmp_args_element_name_69, tmp_args_element_name_70 };
        tmp_assattr_target_13 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_38, call_args );
    }

    Py_DECREF( tmp_called_name_38 );
    if ( tmp_assattr_target_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 96;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_13, const_str_plain_des, tmp_assattr_name_13 );
    Py_DECREF( tmp_assattr_target_13 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 96;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_14 = var_optionCounter;

    if ( tmp_assattr_name_14 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "optionCounter" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 97;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_94 = GET_STRING_DICT_VALUE( moduledict_pieces$knight, (Nuitka_StringObject *)const_str_plain_board );

    if (unlikely( tmp_source_name_94 == NULL ))
    {
        tmp_source_name_94 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_board );
    }

    if ( tmp_source_name_94 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "board" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 97;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_39 = LOOKUP_ATTRIBUTE( tmp_source_name_94, const_str_plain_Grid );
    if ( tmp_called_name_39 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 97;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_71 = var_rowCount;

    if ( tmp_args_element_name_71 == NULL )
    {
        Py_DECREF( tmp_called_name_39 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "rowCount" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 97;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_72 = var_colCount;

    if ( tmp_args_element_name_72 == NULL )
    {
        Py_DECREF( tmp_called_name_39 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "colCount" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 97;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    frame_e8d473a2afdececce24eacfe11f0e0eb->m_frame.f_lineno = 97;
    {
        PyObject *call_args[] = { tmp_args_element_name_71, tmp_args_element_name_72 };
        tmp_assattr_target_14 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_39, call_args );
    }

    Py_DECREF( tmp_called_name_39 );
    if ( tmp_assattr_target_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 97;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_14, const_str_plain_option, tmp_assattr_name_14 );
    Py_DECREF( tmp_assattr_target_14 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 97;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_21 = var_optionCounter;

    if ( tmp_left_name_21 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "optionCounter" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 98;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_21 = const_int_pos_1;
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_21, tmp_right_name_21 );
    tmp_assign_source_23 = tmp_left_name_21;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 98;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    var_optionCounter = tmp_assign_source_23;

    tmp_source_name_95 = var_availMoves;

    if ( tmp_source_name_95 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "availMoves" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 99;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_40 = LOOKUP_ATTRIBUTE( tmp_source_name_95, const_str_plain_append );
    if ( tmp_called_name_40 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 99;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_96 = GET_STRING_DICT_VALUE( moduledict_pieces$knight, (Nuitka_StringObject *)const_str_plain_board );

    if (unlikely( tmp_source_name_96 == NULL ))
    {
        tmp_source_name_96 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_board );
    }

    if ( tmp_source_name_96 == NULL )
    {
        Py_DECREF( tmp_called_name_40 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "board" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 99;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_41 = LOOKUP_ATTRIBUTE( tmp_source_name_96, const_str_plain_Grid );
    if ( tmp_called_name_41 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_40 );

        exception_lineno = 99;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_74 = var_rowCount;

    if ( tmp_args_element_name_74 == NULL )
    {
        Py_DECREF( tmp_called_name_40 );
        Py_DECREF( tmp_called_name_41 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "rowCount" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 99;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_75 = var_colCount;

    if ( tmp_args_element_name_75 == NULL )
    {
        Py_DECREF( tmp_called_name_40 );
        Py_DECREF( tmp_called_name_41 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "colCount" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 99;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    frame_e8d473a2afdececce24eacfe11f0e0eb->m_frame.f_lineno = 99;
    {
        PyObject *call_args[] = { tmp_args_element_name_74, tmp_args_element_name_75 };
        tmp_args_element_name_73 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_41, call_args );
    }

    Py_DECREF( tmp_called_name_41 );
    if ( tmp_args_element_name_73 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_40 );

        exception_lineno = 99;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    frame_e8d473a2afdececce24eacfe11f0e0eb->m_frame.f_lineno = 99;
    {
        PyObject *call_args[] = { tmp_args_element_name_73 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_40, call_args );
    }

    Py_DECREF( tmp_called_name_40 );
    Py_DECREF( tmp_args_element_name_73 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 99;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_98 = GET_STRING_DICT_VALUE( moduledict_pieces$knight, (Nuitka_StringObject *)const_str_plain_board );

    if (unlikely( tmp_source_name_98 == NULL ))
    {
        tmp_source_name_98 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_board );
    }

    if ( tmp_source_name_98 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "board" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 100;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_42 = LOOKUP_ATTRIBUTE( tmp_source_name_98, const_str_plain_Grid );
    if ( tmp_called_name_42 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 100;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_76 = var_rowCount;

    if ( tmp_args_element_name_76 == NULL )
    {
        Py_DECREF( tmp_called_name_42 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "rowCount" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 100;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_77 = var_colCount;

    if ( tmp_args_element_name_77 == NULL )
    {
        Py_DECREF( tmp_called_name_42 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "colCount" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 100;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    frame_e8d473a2afdececce24eacfe11f0e0eb->m_frame.f_lineno = 100;
    {
        PyObject *call_args[] = { tmp_args_element_name_76, tmp_args_element_name_77 };
        tmp_source_name_97 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_42, call_args );
    }

    Py_DECREF( tmp_called_name_42 );
    if ( tmp_source_name_97 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 100;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_bool_arg_7 = LOOKUP_ATTRIBUTE( tmp_source_name_97, const_str_plain_pieceStatus );
    Py_DECREF( tmp_source_name_97 );
    if ( tmp_bool_arg_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 100;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_unused = TO_BOOL( tmp_bool_arg_7 );
    Py_DECREF( tmp_bool_arg_7 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 100;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    branch_no_14:;
    branch_no_13:;
    tmp_source_name_99 = par_self;

    if ( tmp_source_name_99 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 104;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_22 = LOOKUP_ATTRIBUTE( tmp_source_name_99, const_str_plain_row );
    if ( tmp_left_name_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 104;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_22 = const_int_pos_1;
    tmp_assign_source_24 = BINARY_OPERATION_SUB( tmp_left_name_22, tmp_right_name_22 );
    Py_DECREF( tmp_left_name_22 );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 104;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_rowCount;
        var_rowCount = tmp_assign_source_24;
        Py_XDECREF( old );
    }

    tmp_source_name_100 = par_self;

    if ( tmp_source_name_100 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 105;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_23 = LOOKUP_ATTRIBUTE( tmp_source_name_100, const_str_plain_col );
    if ( tmp_left_name_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 105;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_23 = const_int_pos_2;
    tmp_assign_source_25 = BINARY_OPERATION_SUB( tmp_left_name_23, tmp_right_name_23 );
    Py_DECREF( tmp_left_name_23 );
    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 105;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_colCount;
        var_colCount = tmp_assign_source_25;
        Py_XDECREF( old );
    }

    tmp_source_name_101 = par_self;

    if ( tmp_source_name_101 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 106;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_left_15 = LOOKUP_ATTRIBUTE( tmp_source_name_101, const_str_plain_row );
    if ( tmp_compexpr_left_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 106;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_15 = const_int_0;
    tmp_and_left_value_8 = RICH_COMPARE_GT( tmp_compexpr_left_15, tmp_compexpr_right_15 );
    Py_DECREF( tmp_compexpr_left_15 );
    if ( tmp_and_left_value_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 106;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_8 = CHECK_IF_TRUE( tmp_and_left_value_8 );
    if ( tmp_and_left_truth_8 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_8 );

        exception_lineno = 106;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    if ( tmp_and_left_truth_8 == 1 )
    {
        goto and_right_8;
    }
    else
    {
        goto and_left_8;
    }
    and_right_8:;
    Py_DECREF( tmp_and_left_value_8 );
    tmp_source_name_102 = par_self;

    if ( tmp_source_name_102 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 106;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_left_16 = LOOKUP_ATTRIBUTE( tmp_source_name_102, const_str_plain_col );
    if ( tmp_compexpr_left_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 106;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_16 = const_int_pos_1;
    tmp_and_right_value_8 = RICH_COMPARE_GT( tmp_compexpr_left_16, tmp_compexpr_right_16 );
    Py_DECREF( tmp_compexpr_left_16 );
    if ( tmp_and_right_value_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 106;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_cond_value_8 = tmp_and_right_value_8;
    goto and_end_8;
    and_left_8:;
    tmp_cond_value_8 = tmp_and_left_value_8;
    and_end_8:;
    tmp_cond_truth_8 = CHECK_IF_TRUE( tmp_cond_value_8 );
    if ( tmp_cond_truth_8 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_8 );

        exception_lineno = 106;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_8 );
    if ( tmp_cond_truth_8 == 1 )
    {
        goto branch_yes_15;
    }
    else
    {
        goto branch_no_15;
    }
    branch_yes_15:;
    tmp_source_name_105 = GET_STRING_DICT_VALUE( moduledict_pieces$knight, (Nuitka_StringObject *)const_str_plain_board );

    if (unlikely( tmp_source_name_105 == NULL ))
    {
        tmp_source_name_105 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_board );
    }

    if ( tmp_source_name_105 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "board" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 107;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_43 = LOOKUP_ATTRIBUTE( tmp_source_name_105, const_str_plain_Grid );
    if ( tmp_called_name_43 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 107;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_78 = var_rowCount;

    if ( tmp_args_element_name_78 == NULL )
    {
        Py_DECREF( tmp_called_name_43 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "rowCount" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 107;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_79 = var_colCount;

    if ( tmp_args_element_name_79 == NULL )
    {
        Py_DECREF( tmp_called_name_43 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "colCount" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 107;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    frame_e8d473a2afdececce24eacfe11f0e0eb->m_frame.f_lineno = 107;
    {
        PyObject *call_args[] = { tmp_args_element_name_78, tmp_args_element_name_79 };
        tmp_source_name_104 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_43, call_args );
    }

    Py_DECREF( tmp_called_name_43 );
    if ( tmp_source_name_104 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 107;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_103 = LOOKUP_ATTRIBUTE( tmp_source_name_104, const_str_plain_piece );
    Py_DECREF( tmp_source_name_104 );
    if ( tmp_source_name_103 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 107;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_compare_left_8 = LOOKUP_ATTRIBUTE( tmp_source_name_103, const_str_plain_color );
    Py_DECREF( tmp_source_name_103 );
    if ( tmp_compare_left_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 107;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_106 = par_self;

    if ( tmp_source_name_106 == NULL )
    {
        Py_DECREF( tmp_compare_left_8 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 107;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_8 = LOOKUP_ATTRIBUTE( tmp_source_name_106, const_str_plain_color );
    if ( tmp_compare_right_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_8 );

        exception_lineno = 107;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_cmp_NotEq_8 = RICH_COMPARE_BOOL_NE( tmp_compare_left_8, tmp_compare_right_8 );
    Py_DECREF( tmp_compare_left_8 );
    Py_DECREF( tmp_compare_right_8 );
    if ( tmp_cmp_NotEq_8 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 107;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_NotEq_8 == 1 )
    {
        goto branch_yes_16;
    }
    else
    {
        goto branch_no_16;
    }
    branch_yes_16:;
    tmp_assattr_name_15 = Py_True;
    tmp_source_name_107 = GET_STRING_DICT_VALUE( moduledict_pieces$knight, (Nuitka_StringObject *)const_str_plain_board );

    if (unlikely( tmp_source_name_107 == NULL ))
    {
        tmp_source_name_107 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_board );
    }

    if ( tmp_source_name_107 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "board" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 108;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_44 = LOOKUP_ATTRIBUTE( tmp_source_name_107, const_str_plain_Grid );
    if ( tmp_called_name_44 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 108;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_80 = var_rowCount;

    if ( tmp_args_element_name_80 == NULL )
    {
        Py_DECREF( tmp_called_name_44 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "rowCount" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 108;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_81 = var_colCount;

    if ( tmp_args_element_name_81 == NULL )
    {
        Py_DECREF( tmp_called_name_44 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "colCount" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 108;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    frame_e8d473a2afdececce24eacfe11f0e0eb->m_frame.f_lineno = 108;
    {
        PyObject *call_args[] = { tmp_args_element_name_80, tmp_args_element_name_81 };
        tmp_assattr_target_15 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_44, call_args );
    }

    Py_DECREF( tmp_called_name_44 );
    if ( tmp_assattr_target_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 108;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_15, const_str_plain_des, tmp_assattr_name_15 );
    Py_DECREF( tmp_assattr_target_15 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 108;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_16 = var_optionCounter;

    if ( tmp_assattr_name_16 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "optionCounter" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 109;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_108 = GET_STRING_DICT_VALUE( moduledict_pieces$knight, (Nuitka_StringObject *)const_str_plain_board );

    if (unlikely( tmp_source_name_108 == NULL ))
    {
        tmp_source_name_108 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_board );
    }

    if ( tmp_source_name_108 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "board" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 109;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_45 = LOOKUP_ATTRIBUTE( tmp_source_name_108, const_str_plain_Grid );
    if ( tmp_called_name_45 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 109;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_82 = var_rowCount;

    if ( tmp_args_element_name_82 == NULL )
    {
        Py_DECREF( tmp_called_name_45 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "rowCount" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 109;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_83 = var_colCount;

    if ( tmp_args_element_name_83 == NULL )
    {
        Py_DECREF( tmp_called_name_45 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "colCount" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 109;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    frame_e8d473a2afdececce24eacfe11f0e0eb->m_frame.f_lineno = 109;
    {
        PyObject *call_args[] = { tmp_args_element_name_82, tmp_args_element_name_83 };
        tmp_assattr_target_16 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_45, call_args );
    }

    Py_DECREF( tmp_called_name_45 );
    if ( tmp_assattr_target_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 109;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_16, const_str_plain_option, tmp_assattr_name_16 );
    Py_DECREF( tmp_assattr_target_16 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 109;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_24 = var_optionCounter;

    if ( tmp_left_name_24 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "optionCounter" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 110;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_24 = const_int_pos_1;
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_24, tmp_right_name_24 );
    tmp_assign_source_26 = tmp_left_name_24;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 110;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    var_optionCounter = tmp_assign_source_26;

    tmp_source_name_109 = var_availMoves;

    if ( tmp_source_name_109 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "availMoves" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 111;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_46 = LOOKUP_ATTRIBUTE( tmp_source_name_109, const_str_plain_append );
    if ( tmp_called_name_46 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 111;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_110 = GET_STRING_DICT_VALUE( moduledict_pieces$knight, (Nuitka_StringObject *)const_str_plain_board );

    if (unlikely( tmp_source_name_110 == NULL ))
    {
        tmp_source_name_110 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_board );
    }

    if ( tmp_source_name_110 == NULL )
    {
        Py_DECREF( tmp_called_name_46 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "board" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 111;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_47 = LOOKUP_ATTRIBUTE( tmp_source_name_110, const_str_plain_Grid );
    if ( tmp_called_name_47 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_46 );

        exception_lineno = 111;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_85 = var_rowCount;

    if ( tmp_args_element_name_85 == NULL )
    {
        Py_DECREF( tmp_called_name_46 );
        Py_DECREF( tmp_called_name_47 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "rowCount" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 111;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_86 = var_colCount;

    if ( tmp_args_element_name_86 == NULL )
    {
        Py_DECREF( tmp_called_name_46 );
        Py_DECREF( tmp_called_name_47 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "colCount" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 111;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    frame_e8d473a2afdececce24eacfe11f0e0eb->m_frame.f_lineno = 111;
    {
        PyObject *call_args[] = { tmp_args_element_name_85, tmp_args_element_name_86 };
        tmp_args_element_name_84 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_47, call_args );
    }

    Py_DECREF( tmp_called_name_47 );
    if ( tmp_args_element_name_84 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_46 );

        exception_lineno = 111;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    frame_e8d473a2afdececce24eacfe11f0e0eb->m_frame.f_lineno = 111;
    {
        PyObject *call_args[] = { tmp_args_element_name_84 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_46, call_args );
    }

    Py_DECREF( tmp_called_name_46 );
    Py_DECREF( tmp_args_element_name_84 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 111;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_112 = GET_STRING_DICT_VALUE( moduledict_pieces$knight, (Nuitka_StringObject *)const_str_plain_board );

    if (unlikely( tmp_source_name_112 == NULL ))
    {
        tmp_source_name_112 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_board );
    }

    if ( tmp_source_name_112 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "board" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 112;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_48 = LOOKUP_ATTRIBUTE( tmp_source_name_112, const_str_plain_Grid );
    if ( tmp_called_name_48 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 112;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_87 = var_rowCount;

    if ( tmp_args_element_name_87 == NULL )
    {
        Py_DECREF( tmp_called_name_48 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "rowCount" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 112;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_88 = var_colCount;

    if ( tmp_args_element_name_88 == NULL )
    {
        Py_DECREF( tmp_called_name_48 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "colCount" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 112;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    frame_e8d473a2afdececce24eacfe11f0e0eb->m_frame.f_lineno = 112;
    {
        PyObject *call_args[] = { tmp_args_element_name_87, tmp_args_element_name_88 };
        tmp_source_name_111 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_48, call_args );
    }

    Py_DECREF( tmp_called_name_48 );
    if ( tmp_source_name_111 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 112;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_bool_arg_8 = LOOKUP_ATTRIBUTE( tmp_source_name_111, const_str_plain_pieceStatus );
    Py_DECREF( tmp_source_name_111 );
    if ( tmp_bool_arg_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 112;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    tmp_unused = TO_BOOL( tmp_bool_arg_8 );
    Py_DECREF( tmp_bool_arg_8 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 112;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }
    branch_no_16:;
    branch_no_15:;
    tmp_return_value = var_availMoves;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "availMoves" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 115;
        type_description_1 = "oooNoo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e8d473a2afdececce24eacfe11f0e0eb );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e8d473a2afdececce24eacfe11f0e0eb );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e8d473a2afdececce24eacfe11f0e0eb );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e8d473a2afdececce24eacfe11f0e0eb, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e8d473a2afdececce24eacfe11f0e0eb->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e8d473a2afdececce24eacfe11f0e0eb, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e8d473a2afdececce24eacfe11f0e0eb,
        type_description_1,
        par_self,
        var_availMoves,
        var_optionCounter,
        NULL,
        var_rowCount,
        var_colCount
    );


    // Release cached frame.
    if ( frame_e8d473a2afdececce24eacfe11f0e0eb == cache_frame_e8d473a2afdececce24eacfe11f0e0eb )
    {
        Py_DECREF( frame_e8d473a2afdececce24eacfe11f0e0eb );
    }
    cache_frame_e8d473a2afdececce24eacfe11f0e0eb = NULL;

    assertFrameObject( frame_e8d473a2afdececce24eacfe11f0e0eb );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pieces$knight$$$function_3_scan );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_availMoves );
    var_availMoves = NULL;

    Py_XDECREF( var_optionCounter );
    var_optionCounter = NULL;

    Py_XDECREF( var_rowCount );
    var_rowCount = NULL;

    Py_XDECREF( var_colCount );
    var_colCount = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_availMoves );
    var_availMoves = NULL;

    Py_XDECREF( var_optionCounter );
    var_optionCounter = NULL;

    Py_XDECREF( var_rowCount );
    var_rowCount = NULL;

    Py_XDECREF( var_colCount );
    var_colCount = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pieces$knight$$$function_3_scan );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}



static PyObject *MAKE_FUNCTION_pieces$knight$$$function_1___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pieces$knight$$$function_1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_81628413e71df581e79dd741cec85034,
#endif
        codeobj_c39e836ecca6a0bf727d2ff3eda7676e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pieces$knight,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pieces$knight$$$function_2___str__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pieces$knight$$$function_2___str__,
        const_str_plain___str__,
#if PYTHON_VERSION >= 300
        const_str_digest_eb1b88cbed45fa5f957516891619f4af,
#endif
        codeobj_0f2e31bb0c8ed3d33547ab153b78c5a1,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pieces$knight,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pieces$knight$$$function_3_scan(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pieces$knight$$$function_3_scan,
        const_str_plain_scan,
#if PYTHON_VERSION >= 300
        const_str_digest_df122bac150d9fd8ed32b1a1395a3e41,
#endif
        codeobj_e8d473a2afdececce24eacfe11f0e0eb,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pieces$knight,
        Py_None,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_pieces$knight =
{
    PyModuleDef_HEAD_INIT,
    "pieces.knight",   /* m_name */
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

MOD_INIT_DECL( pieces$knight )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_pieces$knight );
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
    puts("pieces.knight: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("pieces.knight: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("pieces.knight: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initpieces$knight" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_pieces$knight = Py_InitModule4(
        "pieces.knight",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_pieces$knight = PyModule_Create( &mdef_pieces$knight );
#endif

    moduledict_pieces$knight = MODULE_DICT( module_pieces$knight );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_pieces$knight, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_pieces$knight,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );

#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_pieces$knight, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_pieces$knight,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_pieces$knight, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_pieces$knight,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_pieces$knight );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_853917c245e6794f23c5b87efdb92761, module_pieces$knight );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_pieces$knight, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_pieces$knight, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_pieces$knight, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

#if PYTHON_VERSION >= 340
#if 0
    UPDATE_STRING_DICT0( moduledict_pieces$knight, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_pieces$knight, (Nuitka_StringObject *)const_str_plain___name__ ),
            metapath_based_loader
        };

        PyObject *spec_value = CALL_FUNCTION_WITH_ARGS2(
            module_spec_class,
            args
        );

        UPDATE_STRING_DICT1( moduledict_pieces$knight, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );

        Py_DECREF( module_spec_class );
    }
#endif
#endif


    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__bases_orig = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *tmp_args_name_1;
    PyObject *tmp_args_name_2;
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
    PyObject *tmp_bases_name_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    int tmp_cmp_NotEq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_dict_name_1;
    PyObject *tmp_dict_name_2;
    PyObject *tmp_dict_name_3;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *tmp_dictset_value;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_fromlist_name_2;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_globals_name_2;
    PyObject *tmp_hasattr_attr_1;
    PyObject *tmp_hasattr_source_1;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_key_name_1;
    PyObject *tmp_key_name_2;
    PyObject *tmp_key_name_3;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_level_name_1;
    PyObject *tmp_level_name_2;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_metaclass_name_1;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    PyObject *tmp_outline_return_value_1;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_set_locals;
    PyObject *tmp_source_name_1;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_type_arg_1;
    static struct Nuitka_FrameObject *cache_frame_c4b2b71d934da1e3ed7af721819de338_2 = NULL;

    struct Nuitka_FrameObject *frame_c4b2b71d934da1e3ed7af721819de338_2;

    struct Nuitka_FrameObject *frame_ccd2ca23240293c40d2e31811c964b78;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    tmp_outline_return_value_1 = NULL;
    PyObject *locals_pieces$knight_4 = NULL;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_pieces$knight, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_200beb7e8feec5c1655d081f09b6a8dc;
    UPDATE_STRING_DICT0( moduledict_pieces$knight, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_pieces$knight, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    // Frame without reuse.
    frame_ccd2ca23240293c40d2e31811c964b78 = MAKE_MODULE_FRAME( codeobj_ccd2ca23240293c40d2e31811c964b78, module_pieces$knight );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_ccd2ca23240293c40d2e31811c964b78 );
    assert( Py_REFCNT( frame_ccd2ca23240293c40d2e31811c964b78 ) == 2 );

    // Framed code:
    tmp_name_name_1 = const_str_plain_pieces;
    tmp_globals_name_1 = (PyObject *)moduledict_pieces$knight;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain_Piece_tuple;
    tmp_level_name_1 = const_int_0;
    frame_ccd2ca23240293c40d2e31811c964b78->m_frame.f_lineno = 1;
    tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_Piece );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pieces$knight, (Nuitka_StringObject *)const_str_plain_Piece, tmp_assign_source_4 );
    tmp_name_name_2 = const_str_plain_board;
    tmp_globals_name_2 = (PyObject *)moduledict_pieces$knight;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = Py_None;
    tmp_level_name_2 = const_int_0;
    frame_ccd2ca23240293c40d2e31811c964b78->m_frame.f_lineno = 2;
    tmp_assign_source_5 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pieces$knight, (Nuitka_StringObject *)const_str_plain_board, tmp_assign_source_5 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_pieces$knight, (Nuitka_StringObject *)const_str_plain_Piece );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Piece );
    }

    CHECK_OBJECT( tmp_tuple_element_1 );
    tmp_assign_source_6 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_6, 0, tmp_tuple_element_1 );
    assert( tmp_class_creation_1__bases_orig == NULL );
    tmp_class_creation_1__bases_orig = tmp_assign_source_6;

    // Tried code:
    tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;

    CHECK_OBJECT( tmp_dircall_arg1_1 );
    Py_INCREF( tmp_dircall_arg1_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
        tmp_assign_source_7 = impl___internal__$$$function_1__mro_entries_conversion( dir_call_args );
    }
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;

        goto try_except_handler_1;
    }
    assert( tmp_class_creation_1__bases == NULL );
    tmp_class_creation_1__bases = tmp_assign_source_7;

    tmp_assign_source_8 = PyDict_New();
    assert( tmp_class_creation_1__class_decl_dict == NULL );
    tmp_class_creation_1__class_decl_dict = tmp_assign_source_8;

    tmp_key_name_1 = const_str_plain_metaclass;
    tmp_dict_name_1 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_1 );
    tmp_res = PyDict_Contains( tmp_dict_name_1, tmp_key_name_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;

        goto try_except_handler_1;
    }
    tmp_cond_value_1 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;

        goto try_except_handler_1;
    }
    if ( tmp_cond_truth_1 == 1 )
    {
        goto condexpr_true_1;
    }
    else
    {
        goto condexpr_false_1;
    }
    condexpr_true_1:;
    tmp_dict_name_2 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_2 );
    tmp_key_name_2 = const_str_plain_metaclass;
    tmp_metaclass_name_1 = DICT_GET_ITEM( tmp_dict_name_2, tmp_key_name_2 );
    if ( tmp_metaclass_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;

        goto try_except_handler_1;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_cond_value_2 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_cond_value_2 );
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;

        goto try_except_handler_1;
    }
    if ( tmp_cond_truth_2 == 1 )
    {
        goto condexpr_true_2;
    }
    else
    {
        goto condexpr_false_2;
    }
    condexpr_true_2:;
    tmp_subscribed_name_1 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_subscribed_name_1 );
    tmp_subscript_name_1 = const_int_0;
    tmp_type_arg_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_type_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;

        goto try_except_handler_1;
    }
    tmp_metaclass_name_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
    Py_DECREF( tmp_type_arg_1 );
    if ( tmp_metaclass_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;

        goto try_except_handler_1;
    }
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_metaclass_name_1 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_1 );
    condexpr_end_2:;
    condexpr_end_1:;
    tmp_bases_name_1 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_bases_name_1 );
    tmp_assign_source_9 = SELECT_METACLASS( tmp_metaclass_name_1, tmp_bases_name_1 );
    Py_DECREF( tmp_metaclass_name_1 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;

        goto try_except_handler_1;
    }
    assert( tmp_class_creation_1__metaclass == NULL );
    tmp_class_creation_1__metaclass = tmp_assign_source_9;

    tmp_key_name_3 = const_str_plain_metaclass;
    tmp_dict_name_3 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_3 );
    tmp_res = PyDict_Contains( tmp_dict_name_3, tmp_key_name_3 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;

        goto try_except_handler_1;
    }
    tmp_cond_value_3 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;

        goto try_except_handler_1;
    }
    if ( tmp_cond_truth_3 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_dictdel_dict = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;

        goto try_except_handler_1;
    }
    branch_no_1:;
    tmp_hasattr_source_1 = tmp_class_creation_1__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_1 );
    tmp_hasattr_attr_1 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_1, tmp_hasattr_attr_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;

        goto try_except_handler_1;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_3;
    }
    else
    {
        goto condexpr_false_3;
    }
    condexpr_true_3:;
    tmp_source_name_1 = tmp_class_creation_1__metaclass;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___prepare__ );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;

        goto try_except_handler_1;
    }
    tmp_tuple_element_2 = const_str_plain_Knight;
    tmp_args_name_1 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_tuple_element_2 );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_2 );
    tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_1 );
    frame_ccd2ca23240293c40d2e31811c964b78->m_frame.f_lineno = 4;
    tmp_assign_source_10 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_name_1 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;

        goto try_except_handler_1;
    }
    goto condexpr_end_3;
    condexpr_false_3:;
    tmp_assign_source_10 = PyDict_New();
    condexpr_end_3:;
    assert( tmp_class_creation_1__prepared == NULL );
    tmp_class_creation_1__prepared = tmp_assign_source_10;

    tmp_set_locals = tmp_class_creation_1__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_pieces$knight_4 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_853917c245e6794f23c5b87efdb92761;
    tmp_res = PyObject_SetItem( locals_pieces$knight_4, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;

        goto try_except_handler_3;
    }
    tmp_dictset_value = const_str_plain_Knight;
    tmp_res = PyObject_SetItem( locals_pieces$knight_4, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;

        goto try_except_handler_3;
    }
    MAKE_OR_REUSE_FRAME( cache_frame_c4b2b71d934da1e3ed7af721819de338_2, codeobj_c4b2b71d934da1e3ed7af721819de338, module_pieces$knight, sizeof(void *) );
    frame_c4b2b71d934da1e3ed7af721819de338_2 = cache_frame_c4b2b71d934da1e3ed7af721819de338_2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c4b2b71d934da1e3ed7af721819de338_2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c4b2b71d934da1e3ed7af721819de338_2 ) == 2 ); // Frame stack

    // Framed code:
    tmp_dictset_value = MAKE_FUNCTION_pieces$knight$$$function_1___init__(  );
    tmp_res = PyObject_SetItem( locals_pieces$knight_4, const_str_plain___init__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_dictset_value = MAKE_FUNCTION_pieces$knight$$$function_2___str__(  );
    tmp_res = PyObject_SetItem( locals_pieces$knight_4, const_str_plain___str__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_dictset_value = MAKE_FUNCTION_pieces$knight$$$function_3_scan(  );
    tmp_res = PyObject_SetItem( locals_pieces$knight_4, const_str_plain_scan, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c4b2b71d934da1e3ed7af721819de338_2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c4b2b71d934da1e3ed7af721819de338_2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c4b2b71d934da1e3ed7af721819de338_2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c4b2b71d934da1e3ed7af721819de338_2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c4b2b71d934da1e3ed7af721819de338_2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c4b2b71d934da1e3ed7af721819de338_2,
        type_description_2,
        NULL
    );


    // Release cached frame.
    if ( frame_c4b2b71d934da1e3ed7af721819de338_2 == cache_frame_c4b2b71d934da1e3ed7af721819de338_2 )
    {
        Py_DECREF( frame_c4b2b71d934da1e3ed7af721819de338_2 );
    }
    cache_frame_c4b2b71d934da1e3ed7af721819de338_2 = NULL;

    assertFrameObject( frame_c4b2b71d934da1e3ed7af721819de338_2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_1;

    frame_no_exception_1:;

    goto skip_nested_handling_1;
    nested_frame_exit_1:;

    goto try_except_handler_3;
    skip_nested_handling_1:;
    tmp_compare_left_1 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_compare_left_1 );
    tmp_compare_right_1 = tmp_class_creation_1__bases_orig;

    CHECK_OBJECT( tmp_compare_right_1 );
    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;

        goto try_except_handler_3;
    }
    if ( tmp_cmp_NotEq_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_dictset_value = tmp_class_creation_1__bases_orig;

    CHECK_OBJECT( tmp_dictset_value );
    tmp_res = PyObject_SetItem( locals_pieces$knight_4, const_str_plain___orig_bases__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;

        goto try_except_handler_3;
    }
    branch_no_2:;
    tmp_called_name_2 = tmp_class_creation_1__metaclass;

    CHECK_OBJECT( tmp_called_name_2 );
    tmp_tuple_element_3 = const_str_plain_Knight;
    tmp_args_name_2 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_3 );
    tmp_tuple_element_3 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_tuple_element_3 );
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_3 );
    tmp_tuple_element_3 = locals_pieces$knight_4;
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_3 );
    tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_2 );
    frame_ccd2ca23240293c40d2e31811c964b78->m_frame.f_lineno = 4;
    tmp_assign_source_12 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_args_name_2 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;

        goto try_except_handler_3;
    }
    assert( outline_0_var___class__ == NULL );
    outline_0_var___class__ = tmp_assign_source_12;

    tmp_outline_return_value_1 = outline_0_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_1 );
    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_3;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pieces$knight );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_3:;
    Py_DECREF( locals_pieces$knight_4 );
    locals_pieces$knight_4 = NULL;
    goto try_return_handler_2;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_pieces$knight_4 );
    locals_pieces$knight_4 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pieces$knight );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_2:;
    CHECK_OBJECT( (PyObject *)outline_0_var___class__ );
    Py_DECREF( outline_0_var___class__ );
    outline_0_var___class__ = NULL;

    goto outline_result_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto outline_exception_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pieces$knight );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_1:;
    exception_lineno = 4;
    goto try_except_handler_1;
    outline_result_1:;
    tmp_assign_source_11 = tmp_outline_return_value_1;
    UPDATE_STRING_DICT1( moduledict_pieces$knight, (Nuitka_StringObject *)const_str_plain_Knight, tmp_assign_source_11 );
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_1__bases );
    tmp_class_creation_1__bases = NULL;

    Py_XDECREF( tmp_class_creation_1__class_decl_dict );
    tmp_class_creation_1__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_1__prepared );
    tmp_class_creation_1__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_ccd2ca23240293c40d2e31811c964b78 );
#endif
    popFrameStack();

    assertFrameObject( frame_ccd2ca23240293c40d2e31811c964b78 );

    goto frame_no_exception_2;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_ccd2ca23240293c40d2e31811c964b78 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ccd2ca23240293c40d2e31811c964b78, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ccd2ca23240293c40d2e31811c964b78->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ccd2ca23240293c40d2e31811c964b78, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_2:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__bases );
    Py_DECREF( tmp_class_creation_1__bases );
    tmp_class_creation_1__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class_decl_dict );
    Py_DECREF( tmp_class_creation_1__class_decl_dict );
    tmp_class_creation_1__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__metaclass );
    Py_DECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__prepared );
    Py_DECREF( tmp_class_creation_1__prepared );
    tmp_class_creation_1__prepared = NULL;


    return MOD_RETURN_VALUE( module_pieces$knight );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
