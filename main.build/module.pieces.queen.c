/* Generated code for Python source for module 'pieces.queen'
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

/* The _module_pieces$queen is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_pieces$queen;
PyDictObject *moduledict_pieces$queen;

/* The module constants used, if any. */
extern PyObject *const_str_plain___orig_bases__;
extern PyObject *const_str_plain_optionCounter;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_metaclass;
extern PyObject *const_str_plain___str__;
extern PyObject *const_str_plain_Q;
static PyObject *const_str_digest_cc3c52ef2e0ef5ab5a07d3dc43f7788e;
extern PyObject *const_str_plain_running;
extern PyObject *const_str_plain_piece;
extern PyObject *const_tuple_str_plain___class___tuple;
extern PyObject *const_str_plain___qualname__;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_col;
extern PyObject *const_str_plain_W;
extern PyObject *const_str_plain_availMoves;
extern PyObject *const_str_plain_pieceFound;
extern PyObject *const_tuple_str_plain_Piece_tuple;
extern PyObject *const_int_0;
static PyObject *const_tuple_b559e1cc74a31d52f9e4604aac88cdec_tuple;
extern PyObject *const_str_plain_rowCount;
extern PyObject *const_tuple_str_plain_self_tuple;
extern PyObject *const_str_plain___init__;
extern PyObject *const_str_plain___prepare__;
static PyObject *const_str_digest_ad64f91717be2b568f9e4c28e0d854d0;
extern PyObject *const_str_plain_row;
extern PyObject *const_str_plain_option;
static PyObject *const_str_digest_26e65b6029d22a2a1f8928e05680d921;
static PyObject *const_str_digest_c33eb8db84bca2bbedbc7432d4ad092d;
extern PyObject *const_int_neg_1;
static PyObject *const_str_digest_8d27fff32be928ff4d687babe863fd50;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_plain_Queen;
extern PyObject *const_int_pos_8;
extern PyObject *const_int_pos_7;
extern PyObject *const_str_plain_Piece;
extern PyObject *const_tuple_empty;
static PyObject *const_str_plain_q;
extern PyObject *const_str_plain_Grid;
extern PyObject *const_str_plain_pieces;
extern PyObject *const_str_plain_des;
extern PyObject *const_str_plain_board;
extern PyObject *const_str_plain_pieceStatus;
extern PyObject *const_str_plain_append;
extern PyObject *const_str_plain_colCount;
extern PyObject *const_str_plain_edgeFound;
extern PyObject *const_str_plain_scan;
extern PyObject *const_str_plain_type;
extern PyObject *const_tuple_str_plain_self_str_plain_color_str_plain_type_tuple;
extern PyObject *const_str_plain_color;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
static PyObject *const_str_digest_80416b08f65ced7fcdbb56a4e91ed3e1;
extern PyObject *const_str_plain___class__;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_cc3c52ef2e0ef5ab5a07d3dc43f7788e = UNSTREAM_STRING( &constant_bin[ 2676 ], 21, 0 );
    const_tuple_b559e1cc74a31d52f9e4604aac88cdec_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_b559e1cc74a31d52f9e4604aac88cdec_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_b559e1cc74a31d52f9e4604aac88cdec_tuple, 1, const_str_plain_availMoves ); Py_INCREF( const_str_plain_availMoves );
    PyTuple_SET_ITEM( const_tuple_b559e1cc74a31d52f9e4604aac88cdec_tuple, 2, const_str_plain_optionCounter ); Py_INCREF( const_str_plain_optionCounter );
    PyTuple_SET_ITEM( const_tuple_b559e1cc74a31d52f9e4604aac88cdec_tuple, 3, const_str_plain_pieceFound ); Py_INCREF( const_str_plain_pieceFound );
    PyTuple_SET_ITEM( const_tuple_b559e1cc74a31d52f9e4604aac88cdec_tuple, 4, const_str_plain_running ); Py_INCREF( const_str_plain_running );
    PyTuple_SET_ITEM( const_tuple_b559e1cc74a31d52f9e4604aac88cdec_tuple, 5, const_str_plain_rowCount ); Py_INCREF( const_str_plain_rowCount );
    PyTuple_SET_ITEM( const_tuple_b559e1cc74a31d52f9e4604aac88cdec_tuple, 6, const_str_plain_colCount ); Py_INCREF( const_str_plain_colCount );
    PyTuple_SET_ITEM( const_tuple_b559e1cc74a31d52f9e4604aac88cdec_tuple, 7, const_str_plain_edgeFound ); Py_INCREF( const_str_plain_edgeFound );
    const_str_digest_ad64f91717be2b568f9e4c28e0d854d0 = UNSTREAM_STRING( &constant_bin[ 2697 ], 13, 0 );
    const_str_digest_26e65b6029d22a2a1f8928e05680d921 = UNSTREAM_STRING( &constant_bin[ 2684 ], 12, 0 );
    const_str_digest_c33eb8db84bca2bbedbc7432d4ad092d = UNSTREAM_STRING( &constant_bin[ 2710 ], 10, 0 );
    const_str_digest_8d27fff32be928ff4d687babe863fd50 = UNSTREAM_STRING( &constant_bin[ 2720 ], 61, 0 );
    const_str_plain_q = UNSTREAM_STRING( &constant_bin[ 435 ], 1, 1 );
    const_str_digest_80416b08f65ced7fcdbb56a4e91ed3e1 = UNSTREAM_STRING( &constant_bin[ 2781 ], 14, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_pieces$queen( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_c542445521638ab72da677829b0bc707;
static PyCodeObject *codeobj_3e5aa5534e240487374ec31df550defc;
static PyCodeObject *codeobj_27ae9d07e9f9300125ea25ca4016d604;
static PyCodeObject *codeobj_98f844dc251d1a8bd396c4ecae587067;
static PyCodeObject *codeobj_fcb3ff43bf41755469ee19bade68239f;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_8d27fff32be928ff4d687babe863fd50;
    codeobj_c542445521638ab72da677829b0bc707 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_cc3c52ef2e0ef5ab5a07d3dc43f7788e, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_3e5aa5534e240487374ec31df550defc = MAKE_CODEOBJ( module_filename_obj, const_str_plain_Queen, 4, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_27ae9d07e9f9300125ea25ca4016d604 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 5, const_tuple_str_plain_self_str_plain_color_str_plain_type_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_98f844dc251d1a8bd396c4ecae587067 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___str__, 8, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_fcb3ff43bf41755469ee19bade68239f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_scan, 14, const_tuple_b559e1cc74a31d52f9e4604aac88cdec_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_1__mro_entries_conversion( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_pieces$queen$$$function_1___init__(  );


static PyObject *MAKE_FUNCTION_pieces$queen$$$function_2___str__(  );


static PyObject *MAKE_FUNCTION_pieces$queen$$$function_3_scan(  );


// The module function definitions.
static PyObject *impl_pieces$queen$$$function_1___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    static struct Nuitka_FrameObject *cache_frame_27ae9d07e9f9300125ea25ca4016d604 = NULL;

    struct Nuitka_FrameObject *frame_27ae9d07e9f9300125ea25ca4016d604;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_27ae9d07e9f9300125ea25ca4016d604, codeobj_27ae9d07e9f9300125ea25ca4016d604, module_pieces$queen, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_27ae9d07e9f9300125ea25ca4016d604 = cache_frame_27ae9d07e9f9300125ea25ca4016d604;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_27ae9d07e9f9300125ea25ca4016d604 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_27ae9d07e9f9300125ea25ca4016d604 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_pieces$queen, (Nuitka_StringObject *)const_str_plain_Piece );

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

    frame_27ae9d07e9f9300125ea25ca4016d604->m_frame.f_lineno = 6;
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
    RESTORE_FRAME_EXCEPTION( frame_27ae9d07e9f9300125ea25ca4016d604 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_27ae9d07e9f9300125ea25ca4016d604 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_27ae9d07e9f9300125ea25ca4016d604, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_27ae9d07e9f9300125ea25ca4016d604->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_27ae9d07e9f9300125ea25ca4016d604, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_27ae9d07e9f9300125ea25ca4016d604,
        type_description_1,
        par_self,
        par_color,
        par_type
    );


    // Release cached frame.
    if ( frame_27ae9d07e9f9300125ea25ca4016d604 == cache_frame_27ae9d07e9f9300125ea25ca4016d604 )
    {
        Py_DECREF( frame_27ae9d07e9f9300125ea25ca4016d604 );
    }
    cache_frame_27ae9d07e9f9300125ea25ca4016d604 = NULL;

    assertFrameObject( frame_27ae9d07e9f9300125ea25ca4016d604 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pieces$queen$$$function_1___init__ );
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
    NUITKA_CANNOT_GET_HERE( pieces$queen$$$function_1___init__ );
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


static PyObject *impl_pieces$queen$$$function_2___str__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    static struct Nuitka_FrameObject *cache_frame_98f844dc251d1a8bd396c4ecae587067 = NULL;

    struct Nuitka_FrameObject *frame_98f844dc251d1a8bd396c4ecae587067;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_98f844dc251d1a8bd396c4ecae587067, codeobj_98f844dc251d1a8bd396c4ecae587067, module_pieces$queen, sizeof(void *) );
    frame_98f844dc251d1a8bd396c4ecae587067 = cache_frame_98f844dc251d1a8bd396c4ecae587067;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_98f844dc251d1a8bd396c4ecae587067 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_98f844dc251d1a8bd396c4ecae587067 ) == 2 ); // Frame stack

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
    tmp_return_value = const_str_plain_Q;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    tmp_return_value = const_str_plain_q;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_98f844dc251d1a8bd396c4ecae587067 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_98f844dc251d1a8bd396c4ecae587067 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_98f844dc251d1a8bd396c4ecae587067 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_98f844dc251d1a8bd396c4ecae587067, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_98f844dc251d1a8bd396c4ecae587067->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_98f844dc251d1a8bd396c4ecae587067, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_98f844dc251d1a8bd396c4ecae587067,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_98f844dc251d1a8bd396c4ecae587067 == cache_frame_98f844dc251d1a8bd396c4ecae587067 )
    {
        Py_DECREF( frame_98f844dc251d1a8bd396c4ecae587067 );
    }
    cache_frame_98f844dc251d1a8bd396c4ecae587067 = NULL;

    assertFrameObject( frame_98f844dc251d1a8bd396c4ecae587067 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pieces$queen$$$function_2___str__ );
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
    NUITKA_CANNOT_GET_HERE( pieces$queen$$$function_2___str__ );
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


static PyObject *impl_pieces$queen$$$function_3_scan( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_availMoves = NULL;
    PyObject *var_optionCounter = NULL;
    PyObject *var_pieceFound = NULL;
    PyObject *var_running = NULL;
    PyObject *var_rowCount = NULL;
    PyObject *var_colCount = NULL;
    PyObject *var_edgeFound = NULL;
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
    int tmp_and_left_truth_9;
    int tmp_and_left_truth_10;
    int tmp_and_left_truth_11;
    int tmp_and_left_truth_12;
    PyObject *tmp_and_left_value_1;
    PyObject *tmp_and_left_value_2;
    PyObject *tmp_and_left_value_3;
    PyObject *tmp_and_left_value_4;
    PyObject *tmp_and_left_value_5;
    PyObject *tmp_and_left_value_6;
    PyObject *tmp_and_left_value_7;
    PyObject *tmp_and_left_value_8;
    PyObject *tmp_and_left_value_9;
    PyObject *tmp_and_left_value_10;
    PyObject *tmp_and_left_value_11;
    PyObject *tmp_and_left_value_12;
    PyObject *tmp_and_right_value_1;
    PyObject *tmp_and_right_value_2;
    PyObject *tmp_and_right_value_3;
    PyObject *tmp_and_right_value_4;
    PyObject *tmp_and_right_value_5;
    PyObject *tmp_and_right_value_6;
    PyObject *tmp_and_right_value_7;
    PyObject *tmp_and_right_value_8;
    PyObject *tmp_and_right_value_9;
    PyObject *tmp_and_right_value_10;
    PyObject *tmp_and_right_value_11;
    PyObject *tmp_and_right_value_12;
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
    PyObject *tmp_assign_source_44;
    PyObject *tmp_assign_source_45;
    PyObject *tmp_assign_source_46;
    PyObject *tmp_assign_source_47;
    PyObject *tmp_assign_source_48;
    PyObject *tmp_assign_source_49;
    PyObject *tmp_assign_source_50;
    PyObject *tmp_assign_source_51;
    PyObject *tmp_assign_source_52;
    PyObject *tmp_assign_source_53;
    PyObject *tmp_assign_source_54;
    PyObject *tmp_assign_source_55;
    PyObject *tmp_assign_source_56;
    PyObject *tmp_assign_source_57;
    PyObject *tmp_assign_source_58;
    PyObject *tmp_assign_source_59;
    PyObject *tmp_assign_source_60;
    PyObject *tmp_assign_source_61;
    PyObject *tmp_assign_source_62;
    PyObject *tmp_assign_source_63;
    PyObject *tmp_assign_source_64;
    PyObject *tmp_assign_source_65;
    PyObject *tmp_assign_source_66;
    PyObject *tmp_assign_source_67;
    PyObject *tmp_assign_source_68;
    PyObject *tmp_assign_source_69;
    PyObject *tmp_assign_source_70;
    PyObject *tmp_assign_source_71;
    PyObject *tmp_assign_source_72;
    PyObject *tmp_assign_source_73;
    PyObject *tmp_assign_source_74;
    PyObject *tmp_assign_source_75;
    PyObject *tmp_assign_source_76;
    PyObject *tmp_assign_source_77;
    PyObject *tmp_assign_source_78;
    PyObject *tmp_assign_source_79;
    PyObject *tmp_assign_source_80;
    PyObject *tmp_assign_source_81;
    PyObject *tmp_assign_source_82;
    PyObject *tmp_assign_source_83;
    PyObject *tmp_assign_source_84;
    PyObject *tmp_assign_source_85;
    PyObject *tmp_assign_source_86;
    PyObject *tmp_assign_source_87;
    PyObject *tmp_assign_source_88;
    PyObject *tmp_assign_source_89;
    PyObject *tmp_assign_source_90;
    PyObject *tmp_assign_source_91;
    PyObject *tmp_assign_source_92;
    PyObject *tmp_assign_source_93;
    PyObject *tmp_assign_source_94;
    PyObject *tmp_assign_source_95;
    PyObject *tmp_assign_source_96;
    PyObject *tmp_assign_source_97;
    PyObject *tmp_assign_source_98;
    PyObject *tmp_assign_source_99;
    PyObject *tmp_assign_source_100;
    PyObject *tmp_assign_source_101;
    PyObject *tmp_assign_source_102;
    PyObject *tmp_assign_source_103;
    PyObject *tmp_assign_source_104;
    PyObject *tmp_assign_source_105;
    PyObject *tmp_assign_source_106;
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
    int tmp_cmp_Gt_1;
    int tmp_cmp_Gt_2;
    int tmp_cmp_Gt_3;
    int tmp_cmp_Lt_1;
    int tmp_cmp_Lt_2;
    int tmp_cmp_Lt_3;
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
    PyObject *tmp_compare_left_9;
    PyObject *tmp_compare_left_10;
    PyObject *tmp_compare_left_11;
    PyObject *tmp_compare_left_12;
    PyObject *tmp_compare_left_13;
    PyObject *tmp_compare_left_14;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    PyObject *tmp_compare_right_5;
    PyObject *tmp_compare_right_6;
    PyObject *tmp_compare_right_7;
    PyObject *tmp_compare_right_8;
    PyObject *tmp_compare_right_9;
    PyObject *tmp_compare_right_10;
    PyObject *tmp_compare_right_11;
    PyObject *tmp_compare_right_12;
    PyObject *tmp_compare_right_13;
    PyObject *tmp_compare_right_14;
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
    PyObject *tmp_compexpr_left_17;
    PyObject *tmp_compexpr_left_18;
    PyObject *tmp_compexpr_left_19;
    PyObject *tmp_compexpr_left_20;
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
    PyObject *tmp_compexpr_right_17;
    PyObject *tmp_compexpr_right_18;
    PyObject *tmp_compexpr_right_19;
    PyObject *tmp_compexpr_right_20;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    int tmp_cond_truth_4;
    int tmp_cond_truth_5;
    int tmp_cond_truth_6;
    int tmp_cond_truth_7;
    int tmp_cond_truth_8;
    int tmp_cond_truth_9;
    int tmp_cond_truth_10;
    int tmp_cond_truth_11;
    int tmp_cond_truth_12;
    int tmp_cond_truth_13;
    int tmp_cond_truth_14;
    int tmp_cond_truth_15;
    int tmp_cond_truth_16;
    int tmp_cond_truth_17;
    int tmp_cond_truth_18;
    int tmp_cond_truth_19;
    int tmp_cond_truth_20;
    int tmp_cond_truth_21;
    int tmp_cond_truth_22;
    int tmp_cond_truth_23;
    int tmp_cond_truth_24;
    int tmp_cond_truth_25;
    int tmp_cond_truth_26;
    int tmp_cond_truth_27;
    int tmp_cond_truth_28;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_cond_value_4;
    PyObject *tmp_cond_value_5;
    PyObject *tmp_cond_value_6;
    PyObject *tmp_cond_value_7;
    PyObject *tmp_cond_value_8;
    PyObject *tmp_cond_value_9;
    PyObject *tmp_cond_value_10;
    PyObject *tmp_cond_value_11;
    PyObject *tmp_cond_value_12;
    PyObject *tmp_cond_value_13;
    PyObject *tmp_cond_value_14;
    PyObject *tmp_cond_value_15;
    PyObject *tmp_cond_value_16;
    PyObject *tmp_cond_value_17;
    PyObject *tmp_cond_value_18;
    PyObject *tmp_cond_value_19;
    PyObject *tmp_cond_value_20;
    PyObject *tmp_cond_value_21;
    PyObject *tmp_cond_value_22;
    PyObject *tmp_cond_value_23;
    PyObject *tmp_cond_value_24;
    PyObject *tmp_cond_value_25;
    PyObject *tmp_cond_value_26;
    PyObject *tmp_cond_value_27;
    PyObject *tmp_cond_value_28;
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
    PyObject *tmp_left_name_25;
    PyObject *tmp_left_name_26;
    PyObject *tmp_left_name_27;
    PyObject *tmp_left_name_28;
    PyObject *tmp_left_name_29;
    PyObject *tmp_left_name_30;
    PyObject *tmp_left_name_31;
    PyObject *tmp_left_name_32;
    PyObject *tmp_operand_name_1;
    PyObject *tmp_operand_name_2;
    PyObject *tmp_operand_name_3;
    PyObject *tmp_operand_name_4;
    int tmp_or_left_truth_1;
    int tmp_or_left_truth_2;
    int tmp_or_left_truth_3;
    int tmp_or_left_truth_4;
    int tmp_or_left_truth_5;
    int tmp_or_left_truth_6;
    int tmp_or_left_truth_7;
    int tmp_or_left_truth_8;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_left_value_2;
    PyObject *tmp_or_left_value_3;
    PyObject *tmp_or_left_value_4;
    PyObject *tmp_or_left_value_5;
    PyObject *tmp_or_left_value_6;
    PyObject *tmp_or_left_value_7;
    PyObject *tmp_or_left_value_8;
    PyObject *tmp_or_right_value_1;
    PyObject *tmp_or_right_value_2;
    PyObject *tmp_or_right_value_3;
    PyObject *tmp_or_right_value_4;
    PyObject *tmp_or_right_value_5;
    PyObject *tmp_or_right_value_6;
    PyObject *tmp_or_right_value_7;
    PyObject *tmp_or_right_value_8;
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
    PyObject *tmp_right_name_25;
    PyObject *tmp_right_name_26;
    PyObject *tmp_right_name_27;
    PyObject *tmp_right_name_28;
    PyObject *tmp_right_name_29;
    PyObject *tmp_right_name_30;
    PyObject *tmp_right_name_31;
    PyObject *tmp_right_name_32;
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
    PyObject *tmp_source_name_113;
    PyObject *tmp_source_name_114;
    PyObject *tmp_source_name_115;
    PyObject *tmp_source_name_116;
    PyObject *tmp_source_name_117;
    PyObject *tmp_source_name_118;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_fcb3ff43bf41755469ee19bade68239f = NULL;

    struct Nuitka_FrameObject *frame_fcb3ff43bf41755469ee19bade68239f;

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

    tmp_assign_source_3 = Py_False;
    assert( var_pieceFound == NULL );
    Py_INCREF( tmp_assign_source_3 );
    var_pieceFound = tmp_assign_source_3;

    tmp_assign_source_4 = Py_True;
    assert( var_running == NULL );
    Py_INCREF( tmp_assign_source_4 );
    var_running = tmp_assign_source_4;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_fcb3ff43bf41755469ee19bade68239f, codeobj_fcb3ff43bf41755469ee19bade68239f, module_pieces$queen, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_fcb3ff43bf41755469ee19bade68239f = cache_frame_fcb3ff43bf41755469ee19bade68239f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_fcb3ff43bf41755469ee19bade68239f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_fcb3ff43bf41755469ee19bade68239f ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_assign_source_5 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_row );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_rowCount == NULL );
    var_rowCount = tmp_assign_source_5;

    tmp_source_name_2 = par_self;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 22;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_6 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_col );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_colCount == NULL );
    var_colCount = tmp_assign_source_6;

    loop_start_1:;
    tmp_left_name_1 = var_rowCount;

    if ( tmp_left_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "rowCount" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 25;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_1 = const_int_pos_1;
    tmp_compexpr_left_1 = BINARY_OPERATION_SUB( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_1 = const_int_neg_1;
    tmp_and_left_value_1 = RICH_COMPARE_GT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_1 );

        exception_lineno = 25;
        type_description_1 = "oooooooo";
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
    tmp_and_right_value_1 = var_running;

    if ( tmp_and_right_value_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "running" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 25;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_and_right_value_1 );
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

        exception_lineno = 25;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_no_1;
    }
    else
    {
        goto branch_yes_1;
    }
    branch_yes_1:;
    goto loop_end_1;
    branch_no_1:;
    tmp_left_name_2 = var_rowCount;

    if ( tmp_left_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "rowCount" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 26;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_2 = const_int_pos_1;
    tmp_result = BINARY_OPERATION_INPLACE( PyNumber_InPlaceSubtract, &tmp_left_name_2, tmp_right_name_2 );
    tmp_assign_source_7 = tmp_left_name_2;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    var_rowCount = tmp_assign_source_7;

    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_pieces$queen, (Nuitka_StringObject *)const_str_plain_board );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_board );
    }

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "board" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 27;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_Grid );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 27;
        type_description_1 = "oooooooo";
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

        exception_lineno = 27;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_6 = par_self;

    if ( tmp_source_name_6 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 27;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_col );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 27;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    frame_fcb3ff43bf41755469ee19bade68239f->m_frame.f_lineno = 27;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_source_name_4 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_source_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 27;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_piece );
    Py_DECREF( tmp_source_name_4 );
    if ( tmp_source_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 27;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_color );
    Py_DECREF( tmp_source_name_3 );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 27;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_7 = par_self;

    if ( tmp_source_name_7 == NULL )
    {
        Py_DECREF( tmp_compare_left_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 27;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_color );
    if ( tmp_compare_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 27;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_1, tmp_compare_right_1 );
    Py_DECREF( tmp_compare_left_1 );
    Py_DECREF( tmp_compare_right_1 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 27;
        type_description_1 = "oooooooo";
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
    tmp_source_name_8 = GET_STRING_DICT_VALUE( moduledict_pieces$queen, (Nuitka_StringObject *)const_str_plain_board );

    if (unlikely( tmp_source_name_8 == NULL ))
    {
        tmp_source_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_board );
    }

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "board" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 28;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_Grid );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;
        type_description_1 = "oooooooo";
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

        exception_lineno = 28;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_9 = par_self;

    if ( tmp_source_name_9 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 28;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_col );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 28;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    frame_fcb3ff43bf41755469ee19bade68239f->m_frame.f_lineno = 28;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_assattr_target_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_assattr_target_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_des, tmp_assattr_name_1 );
    Py_DECREF( tmp_assattr_target_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;
        type_description_1 = "oooooooo";
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

        exception_lineno = 29;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_10 = GET_STRING_DICT_VALUE( moduledict_pieces$queen, (Nuitka_StringObject *)const_str_plain_board );

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

        exception_lineno = 29;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_Grid );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;
        type_description_1 = "oooooooo";
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

        exception_lineno = 29;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_11 = par_self;

    if ( tmp_source_name_11 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 29;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_col );
    if ( tmp_args_element_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 29;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    frame_fcb3ff43bf41755469ee19bade68239f->m_frame.f_lineno = 29;
    {
        PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
        tmp_assattr_target_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_element_name_6 );
    if ( tmp_assattr_target_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_option, tmp_assattr_name_2 );
    Py_DECREF( tmp_assattr_target_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;
        type_description_1 = "oooooooo";
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

        exception_lineno = 30;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_3 = const_int_pos_1;
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_3, tmp_right_name_3 );
    tmp_assign_source_8 = tmp_left_name_3;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    var_optionCounter = tmp_assign_source_8;

    tmp_source_name_12 = var_availMoves;

    if ( tmp_source_name_12 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "availMoves" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 31;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_append );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_13 = GET_STRING_DICT_VALUE( moduledict_pieces$queen, (Nuitka_StringObject *)const_str_plain_board );

    if (unlikely( tmp_source_name_13 == NULL ))
    {
        tmp_source_name_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_board );
    }

    if ( tmp_source_name_13 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "board" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 31;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_Grid );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_4 );

        exception_lineno = 31;
        type_description_1 = "oooooooo";
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

        exception_lineno = 31;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_14 = par_self;

    if ( tmp_source_name_14 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_called_name_5 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 31;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_col );
    if ( tmp_args_element_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_called_name_5 );

        exception_lineno = 31;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    frame_fcb3ff43bf41755469ee19bade68239f->m_frame.f_lineno = 31;
    {
        PyObject *call_args[] = { tmp_args_element_name_8, tmp_args_element_name_9 };
        tmp_args_element_name_7 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_called_name_5 );
    Py_DECREF( tmp_args_element_name_9 );
    if ( tmp_args_element_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_4 );

        exception_lineno = 31;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    frame_fcb3ff43bf41755469ee19bade68239f->m_frame.f_lineno = 31;
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


        exception_lineno = 31;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_16 = GET_STRING_DICT_VALUE( moduledict_pieces$queen, (Nuitka_StringObject *)const_str_plain_board );

    if (unlikely( tmp_source_name_16 == NULL ))
    {
        tmp_source_name_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_board );
    }

    if ( tmp_source_name_16 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "board" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 32;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_Grid );
    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;
        type_description_1 = "oooooooo";
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

        exception_lineno = 32;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_17 = par_self;

    if ( tmp_source_name_17 == NULL )
    {
        Py_DECREF( tmp_called_name_6 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 32;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_col );
    if ( tmp_args_element_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_6 );

        exception_lineno = 32;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    frame_fcb3ff43bf41755469ee19bade68239f->m_frame.f_lineno = 32;
    {
        PyObject *call_args[] = { tmp_args_element_name_10, tmp_args_element_name_11 };
        tmp_source_name_15 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_6, call_args );
    }

    Py_DECREF( tmp_called_name_6 );
    Py_DECREF( tmp_args_element_name_11 );
    if ( tmp_source_name_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_pieceStatus );
    Py_DECREF( tmp_source_name_15 );
    if ( tmp_cond_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        exception_lineno = 32;
        type_description_1 = "oooooooo";
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
    tmp_assign_source_9 = Py_True;
    {
        PyObject *old = var_pieceFound;
        var_pieceFound = tmp_assign_source_9;
        Py_INCREF( var_pieceFound );
        Py_XDECREF( old );
    }

    branch_no_3:;
    goto branch_end_2;
    branch_no_2:;
    tmp_assign_source_10 = const_int_0;
    {
        PyObject *old = var_rowCount;
        var_rowCount = tmp_assign_source_10;
        Py_INCREF( var_rowCount );
        Py_XDECREF( old );
    }

    tmp_assign_source_11 = Py_False;
    {
        PyObject *old = var_running;
        var_running = tmp_assign_source_11;
        Py_INCREF( var_running );
        Py_XDECREF( old );
    }

    branch_end_2:;
    tmp_cond_value_3 = var_pieceFound;

    if ( tmp_cond_value_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "pieceFound" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 39;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 39;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_3 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_assign_source_12 = const_int_0;
    {
        PyObject *old = var_rowCount;
        var_rowCount = tmp_assign_source_12;
        Py_INCREF( var_rowCount );
        Py_XDECREF( old );
    }

    tmp_assign_source_13 = Py_False;
    {
        PyObject *old = var_running;
        var_running = tmp_assign_source_13;
        Py_INCREF( var_running );
        Py_XDECREF( old );
    }

    branch_no_4:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    tmp_source_name_18 = par_self;

    if ( tmp_source_name_18 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 44;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_14 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_row );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_rowCount;
        var_rowCount = tmp_assign_source_14;
        Py_XDECREF( old );
    }

    tmp_assign_source_15 = Py_True;
    {
        PyObject *old = var_running;
        var_running = tmp_assign_source_15;
        Py_INCREF( var_running );
        Py_XDECREF( old );
    }

    tmp_assign_source_16 = Py_False;
    {
        PyObject *old = var_pieceFound;
        var_pieceFound = tmp_assign_source_16;
        Py_INCREF( var_pieceFound );
        Py_XDECREF( old );
    }

    loop_start_2:;
    tmp_left_name_4 = var_rowCount;

    if ( tmp_left_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "rowCount" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 47;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_4 = const_int_pos_1;
    tmp_compexpr_left_2 = BINARY_OPERATION_ADD( tmp_left_name_4, tmp_right_name_4 );
    if ( tmp_compexpr_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 47;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_2 = const_int_pos_8;
    tmp_and_left_value_2 = RICH_COMPARE_LT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    Py_DECREF( tmp_compexpr_left_2 );
    if ( tmp_and_left_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 47;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_2 = CHECK_IF_TRUE( tmp_and_left_value_2 );
    if ( tmp_and_left_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_2 );

        exception_lineno = 47;
        type_description_1 = "oooooooo";
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
    tmp_and_right_value_2 = var_running;

    if ( tmp_and_right_value_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "running" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 47;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_and_right_value_2 );
    tmp_cond_value_4 = tmp_and_right_value_2;
    goto and_end_2;
    and_left_2:;
    tmp_cond_value_4 = tmp_and_left_value_2;
    and_end_2:;
    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_4 );

        exception_lineno = 47;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == 1 )
    {
        goto branch_no_5;
    }
    else
    {
        goto branch_yes_5;
    }
    branch_yes_5:;
    goto loop_end_2;
    branch_no_5:;
    tmp_left_name_5 = var_rowCount;

    if ( tmp_left_name_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "rowCount" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 48;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_5 = const_int_pos_1;
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_5, tmp_right_name_5 );
    tmp_assign_source_17 = tmp_left_name_5;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 48;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    var_rowCount = tmp_assign_source_17;

    tmp_source_name_21 = GET_STRING_DICT_VALUE( moduledict_pieces$queen, (Nuitka_StringObject *)const_str_plain_board );

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

        exception_lineno = 49;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_Grid );
    if ( tmp_called_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 49;
        type_description_1 = "oooooooo";
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

        exception_lineno = 49;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_22 = par_self;

    if ( tmp_source_name_22 == NULL )
    {
        Py_DECREF( tmp_called_name_7 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 49;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_col );
    if ( tmp_args_element_name_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_7 );

        exception_lineno = 49;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    frame_fcb3ff43bf41755469ee19bade68239f->m_frame.f_lineno = 49;
    {
        PyObject *call_args[] = { tmp_args_element_name_12, tmp_args_element_name_13 };
        tmp_source_name_20 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_7, call_args );
    }

    Py_DECREF( tmp_called_name_7 );
    Py_DECREF( tmp_args_element_name_13 );
    if ( tmp_source_name_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 49;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_19 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_piece );
    Py_DECREF( tmp_source_name_20 );
    if ( tmp_source_name_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 49;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_color );
    Py_DECREF( tmp_source_name_19 );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 49;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_23 = par_self;

    if ( tmp_source_name_23 == NULL )
    {
        Py_DECREF( tmp_compare_left_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 49;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain_color );
    if ( tmp_compare_right_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_2 );

        exception_lineno = 49;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cmp_NotEq_2 = RICH_COMPARE_BOOL_NE( tmp_compare_left_2, tmp_compare_right_2 );
    Py_DECREF( tmp_compare_left_2 );
    Py_DECREF( tmp_compare_right_2 );
    if ( tmp_cmp_NotEq_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 49;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_NotEq_2 == 1 )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_assattr_name_3 = Py_True;
    tmp_source_name_24 = GET_STRING_DICT_VALUE( moduledict_pieces$queen, (Nuitka_StringObject *)const_str_plain_board );

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

        exception_lineno = 50;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain_Grid );
    if ( tmp_called_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;
        type_description_1 = "oooooooo";
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

        exception_lineno = 50;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_25 = par_self;

    if ( tmp_source_name_25 == NULL )
    {
        Py_DECREF( tmp_called_name_8 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 50;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_15 = LOOKUP_ATTRIBUTE( tmp_source_name_25, const_str_plain_col );
    if ( tmp_args_element_name_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_8 );

        exception_lineno = 50;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    frame_fcb3ff43bf41755469ee19bade68239f->m_frame.f_lineno = 50;
    {
        PyObject *call_args[] = { tmp_args_element_name_14, tmp_args_element_name_15 };
        tmp_assattr_target_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_8, call_args );
    }

    Py_DECREF( tmp_called_name_8 );
    Py_DECREF( tmp_args_element_name_15 );
    if ( tmp_assattr_target_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_des, tmp_assattr_name_3 );
    Py_DECREF( tmp_assattr_target_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;
        type_description_1 = "oooooooo";
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

        exception_lineno = 51;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_26 = GET_STRING_DICT_VALUE( moduledict_pieces$queen, (Nuitka_StringObject *)const_str_plain_board );

    if (unlikely( tmp_source_name_26 == NULL ))
    {
        tmp_source_name_26 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_board );
    }

    if ( tmp_source_name_26 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "board" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 51;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_26, const_str_plain_Grid );
    if ( tmp_called_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 51;
        type_description_1 = "oooooooo";
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

        exception_lineno = 51;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_27 = par_self;

    if ( tmp_source_name_27 == NULL )
    {
        Py_DECREF( tmp_called_name_9 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 51;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_17 = LOOKUP_ATTRIBUTE( tmp_source_name_27, const_str_plain_col );
    if ( tmp_args_element_name_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_9 );

        exception_lineno = 51;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    frame_fcb3ff43bf41755469ee19bade68239f->m_frame.f_lineno = 51;
    {
        PyObject *call_args[] = { tmp_args_element_name_16, tmp_args_element_name_17 };
        tmp_assattr_target_4 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_9, call_args );
    }

    Py_DECREF( tmp_called_name_9 );
    Py_DECREF( tmp_args_element_name_17 );
    if ( tmp_assattr_target_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 51;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_option, tmp_assattr_name_4 );
    Py_DECREF( tmp_assattr_target_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 51;
        type_description_1 = "oooooooo";
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

        exception_lineno = 52;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_6 = const_int_pos_1;
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_6, tmp_right_name_6 );
    tmp_assign_source_18 = tmp_left_name_6;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 52;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    var_optionCounter = tmp_assign_source_18;

    tmp_source_name_28 = var_availMoves;

    if ( tmp_source_name_28 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "availMoves" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 53;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_28, const_str_plain_append );
    if ( tmp_called_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 53;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_29 = GET_STRING_DICT_VALUE( moduledict_pieces$queen, (Nuitka_StringObject *)const_str_plain_board );

    if (unlikely( tmp_source_name_29 == NULL ))
    {
        tmp_source_name_29 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_board );
    }

    if ( tmp_source_name_29 == NULL )
    {
        Py_DECREF( tmp_called_name_10 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "board" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 53;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_29, const_str_plain_Grid );
    if ( tmp_called_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_10 );

        exception_lineno = 53;
        type_description_1 = "oooooooo";
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

        exception_lineno = 53;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_30 = par_self;

    if ( tmp_source_name_30 == NULL )
    {
        Py_DECREF( tmp_called_name_10 );
        Py_DECREF( tmp_called_name_11 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 53;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_20 = LOOKUP_ATTRIBUTE( tmp_source_name_30, const_str_plain_col );
    if ( tmp_args_element_name_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_10 );
        Py_DECREF( tmp_called_name_11 );

        exception_lineno = 53;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    frame_fcb3ff43bf41755469ee19bade68239f->m_frame.f_lineno = 53;
    {
        PyObject *call_args[] = { tmp_args_element_name_19, tmp_args_element_name_20 };
        tmp_args_element_name_18 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_11, call_args );
    }

    Py_DECREF( tmp_called_name_11 );
    Py_DECREF( tmp_args_element_name_20 );
    if ( tmp_args_element_name_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_10 );

        exception_lineno = 53;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    frame_fcb3ff43bf41755469ee19bade68239f->m_frame.f_lineno = 53;
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


        exception_lineno = 53;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_32 = GET_STRING_DICT_VALUE( moduledict_pieces$queen, (Nuitka_StringObject *)const_str_plain_board );

    if (unlikely( tmp_source_name_32 == NULL ))
    {
        tmp_source_name_32 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_board );
    }

    if ( tmp_source_name_32 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "board" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 54;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_32, const_str_plain_Grid );
    if ( tmp_called_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;
        type_description_1 = "oooooooo";
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

        exception_lineno = 54;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_33 = par_self;

    if ( tmp_source_name_33 == NULL )
    {
        Py_DECREF( tmp_called_name_12 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 54;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_22 = LOOKUP_ATTRIBUTE( tmp_source_name_33, const_str_plain_col );
    if ( tmp_args_element_name_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_12 );

        exception_lineno = 54;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    frame_fcb3ff43bf41755469ee19bade68239f->m_frame.f_lineno = 54;
    {
        PyObject *call_args[] = { tmp_args_element_name_21, tmp_args_element_name_22 };
        tmp_source_name_31 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_12, call_args );
    }

    Py_DECREF( tmp_called_name_12 );
    Py_DECREF( tmp_args_element_name_22 );
    if ( tmp_source_name_31 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_value_5 = LOOKUP_ATTRIBUTE( tmp_source_name_31, const_str_plain_pieceStatus );
    Py_DECREF( tmp_source_name_31 );
    if ( tmp_cond_value_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_5 = CHECK_IF_TRUE( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_5 );

        exception_lineno = 54;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == 1 )
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_assign_source_19 = Py_True;
    {
        PyObject *old = var_pieceFound;
        var_pieceFound = tmp_assign_source_19;
        Py_INCREF( var_pieceFound );
        Py_XDECREF( old );
    }

    branch_no_7:;
    goto branch_end_6;
    branch_no_6:;
    tmp_assign_source_20 = const_int_pos_7;
    {
        PyObject *old = var_rowCount;
        var_rowCount = tmp_assign_source_20;
        Py_INCREF( var_rowCount );
        Py_XDECREF( old );
    }

    tmp_assign_source_21 = Py_False;
    {
        PyObject *old = var_running;
        var_running = tmp_assign_source_21;
        Py_INCREF( var_running );
        Py_XDECREF( old );
    }

    branch_end_6:;
    tmp_cond_value_6 = var_pieceFound;

    if ( tmp_cond_value_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "pieceFound" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 59;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_6 = CHECK_IF_TRUE( tmp_cond_value_6 );
    if ( tmp_cond_truth_6 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 59;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_6 == 1 )
    {
        goto branch_yes_8;
    }
    else
    {
        goto branch_no_8;
    }
    branch_yes_8:;
    tmp_assign_source_22 = const_int_pos_7;
    {
        PyObject *old = var_rowCount;
        var_rowCount = tmp_assign_source_22;
        Py_INCREF( var_rowCount );
        Py_XDECREF( old );
    }

    tmp_assign_source_23 = Py_False;
    {
        PyObject *old = var_running;
        var_running = tmp_assign_source_23;
        Py_INCREF( var_running );
        Py_XDECREF( old );
    }

    branch_no_8:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 47;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_2;
    loop_end_2:;
    tmp_assign_source_24 = Py_True;
    {
        PyObject *old = var_running;
        var_running = tmp_assign_source_24;
        Py_INCREF( var_running );
        Py_XDECREF( old );
    }

    tmp_assign_source_25 = Py_False;
    {
        PyObject *old = var_pieceFound;
        var_pieceFound = tmp_assign_source_25;
        Py_INCREF( var_pieceFound );
        Py_XDECREF( old );
    }

    loop_start_3:;
    tmp_left_name_7 = var_colCount;

    if ( tmp_left_name_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "colCount" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 66;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_7 = const_int_pos_1;
    tmp_compexpr_left_3 = BINARY_OPERATION_ADD( tmp_left_name_7, tmp_right_name_7 );
    if ( tmp_compexpr_left_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_3 = const_int_pos_8;
    tmp_and_left_value_3 = RICH_COMPARE_LT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
    Py_DECREF( tmp_compexpr_left_3 );
    if ( tmp_and_left_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_3 = CHECK_IF_TRUE( tmp_and_left_value_3 );
    if ( tmp_and_left_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_3 );

        exception_lineno = 66;
        type_description_1 = "oooooooo";
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
    tmp_and_right_value_3 = var_running;

    if ( tmp_and_right_value_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "running" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 66;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_and_right_value_3 );
    tmp_cond_value_7 = tmp_and_right_value_3;
    goto and_end_3;
    and_left_3:;
    tmp_cond_value_7 = tmp_and_left_value_3;
    and_end_3:;
    tmp_cond_truth_7 = CHECK_IF_TRUE( tmp_cond_value_7 );
    if ( tmp_cond_truth_7 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_7 );

        exception_lineno = 66;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_7 );
    if ( tmp_cond_truth_7 == 1 )
    {
        goto branch_no_9;
    }
    else
    {
        goto branch_yes_9;
    }
    branch_yes_9:;
    goto loop_end_3;
    branch_no_9:;
    tmp_left_name_8 = var_colCount;

    if ( tmp_left_name_8 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "colCount" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 67;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_8 = const_int_pos_1;
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_8, tmp_right_name_8 );
    tmp_assign_source_26 = tmp_left_name_8;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 67;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    var_colCount = tmp_assign_source_26;

    tmp_source_name_36 = GET_STRING_DICT_VALUE( moduledict_pieces$queen, (Nuitka_StringObject *)const_str_plain_board );

    if (unlikely( tmp_source_name_36 == NULL ))
    {
        tmp_source_name_36 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_board );
    }

    if ( tmp_source_name_36 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "board" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 69;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_36, const_str_plain_Grid );
    if ( tmp_called_name_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 69;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_37 = par_self;

    if ( tmp_source_name_37 == NULL )
    {
        Py_DECREF( tmp_called_name_13 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 69;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_23 = LOOKUP_ATTRIBUTE( tmp_source_name_37, const_str_plain_row );
    if ( tmp_args_element_name_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_13 );

        exception_lineno = 69;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_24 = var_colCount;

    if ( tmp_args_element_name_24 == NULL )
    {
        Py_DECREF( tmp_called_name_13 );
        Py_DECREF( tmp_args_element_name_23 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "colCount" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 69;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    frame_fcb3ff43bf41755469ee19bade68239f->m_frame.f_lineno = 69;
    {
        PyObject *call_args[] = { tmp_args_element_name_23, tmp_args_element_name_24 };
        tmp_source_name_35 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_13, call_args );
    }

    Py_DECREF( tmp_called_name_13 );
    Py_DECREF( tmp_args_element_name_23 );
    if ( tmp_source_name_35 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 69;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_34 = LOOKUP_ATTRIBUTE( tmp_source_name_35, const_str_plain_piece );
    Py_DECREF( tmp_source_name_35 );
    if ( tmp_source_name_34 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 69;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_left_3 = LOOKUP_ATTRIBUTE( tmp_source_name_34, const_str_plain_color );
    Py_DECREF( tmp_source_name_34 );
    if ( tmp_compare_left_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 69;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_38 = par_self;

    if ( tmp_source_name_38 == NULL )
    {
        Py_DECREF( tmp_compare_left_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 69;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_3 = LOOKUP_ATTRIBUTE( tmp_source_name_38, const_str_plain_color );
    if ( tmp_compare_right_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_3 );

        exception_lineno = 69;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cmp_NotEq_3 = RICH_COMPARE_BOOL_NE( tmp_compare_left_3, tmp_compare_right_3 );
    Py_DECREF( tmp_compare_left_3 );
    Py_DECREF( tmp_compare_right_3 );
    if ( tmp_cmp_NotEq_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 69;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_NotEq_3 == 1 )
    {
        goto branch_yes_10;
    }
    else
    {
        goto branch_no_10;
    }
    branch_yes_10:;
    tmp_assattr_name_5 = Py_True;
    tmp_source_name_39 = GET_STRING_DICT_VALUE( moduledict_pieces$queen, (Nuitka_StringObject *)const_str_plain_board );

    if (unlikely( tmp_source_name_39 == NULL ))
    {
        tmp_source_name_39 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_board );
    }

    if ( tmp_source_name_39 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "board" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 70;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_39, const_str_plain_Grid );
    if ( tmp_called_name_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 70;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_40 = par_self;

    if ( tmp_source_name_40 == NULL )
    {
        Py_DECREF( tmp_called_name_14 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 70;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_25 = LOOKUP_ATTRIBUTE( tmp_source_name_40, const_str_plain_row );
    if ( tmp_args_element_name_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_14 );

        exception_lineno = 70;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_26 = var_colCount;

    if ( tmp_args_element_name_26 == NULL )
    {
        Py_DECREF( tmp_called_name_14 );
        Py_DECREF( tmp_args_element_name_25 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "colCount" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 70;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    frame_fcb3ff43bf41755469ee19bade68239f->m_frame.f_lineno = 70;
    {
        PyObject *call_args[] = { tmp_args_element_name_25, tmp_args_element_name_26 };
        tmp_assattr_target_5 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_14, call_args );
    }

    Py_DECREF( tmp_called_name_14 );
    Py_DECREF( tmp_args_element_name_25 );
    if ( tmp_assattr_target_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 70;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_des, tmp_assattr_name_5 );
    Py_DECREF( tmp_assattr_target_5 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 70;
        type_description_1 = "oooooooo";
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

        exception_lineno = 71;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_41 = GET_STRING_DICT_VALUE( moduledict_pieces$queen, (Nuitka_StringObject *)const_str_plain_board );

    if (unlikely( tmp_source_name_41 == NULL ))
    {
        tmp_source_name_41 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_board );
    }

    if ( tmp_source_name_41 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "board" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 71;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_15 = LOOKUP_ATTRIBUTE( tmp_source_name_41, const_str_plain_Grid );
    if ( tmp_called_name_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 71;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_42 = par_self;

    if ( tmp_source_name_42 == NULL )
    {
        Py_DECREF( tmp_called_name_15 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 71;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_27 = LOOKUP_ATTRIBUTE( tmp_source_name_42, const_str_plain_row );
    if ( tmp_args_element_name_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_15 );

        exception_lineno = 71;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_28 = var_colCount;

    if ( tmp_args_element_name_28 == NULL )
    {
        Py_DECREF( tmp_called_name_15 );
        Py_DECREF( tmp_args_element_name_27 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "colCount" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 71;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    frame_fcb3ff43bf41755469ee19bade68239f->m_frame.f_lineno = 71;
    {
        PyObject *call_args[] = { tmp_args_element_name_27, tmp_args_element_name_28 };
        tmp_assattr_target_6 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_15, call_args );
    }

    Py_DECREF( tmp_called_name_15 );
    Py_DECREF( tmp_args_element_name_27 );
    if ( tmp_assattr_target_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 71;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain_option, tmp_assattr_name_6 );
    Py_DECREF( tmp_assattr_target_6 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 71;
        type_description_1 = "oooooooo";
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

        exception_lineno = 72;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_9 = const_int_pos_1;
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_9, tmp_right_name_9 );
    tmp_assign_source_27 = tmp_left_name_9;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 72;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    var_optionCounter = tmp_assign_source_27;

    tmp_source_name_43 = var_availMoves;

    if ( tmp_source_name_43 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "availMoves" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 73;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_16 = LOOKUP_ATTRIBUTE( tmp_source_name_43, const_str_plain_append );
    if ( tmp_called_name_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 73;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_44 = GET_STRING_DICT_VALUE( moduledict_pieces$queen, (Nuitka_StringObject *)const_str_plain_board );

    if (unlikely( tmp_source_name_44 == NULL ))
    {
        tmp_source_name_44 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_board );
    }

    if ( tmp_source_name_44 == NULL )
    {
        Py_DECREF( tmp_called_name_16 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "board" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 73;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_17 = LOOKUP_ATTRIBUTE( tmp_source_name_44, const_str_plain_Grid );
    if ( tmp_called_name_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_16 );

        exception_lineno = 73;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_45 = par_self;

    if ( tmp_source_name_45 == NULL )
    {
        Py_DECREF( tmp_called_name_16 );
        Py_DECREF( tmp_called_name_17 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 73;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_30 = LOOKUP_ATTRIBUTE( tmp_source_name_45, const_str_plain_row );
    if ( tmp_args_element_name_30 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_16 );
        Py_DECREF( tmp_called_name_17 );

        exception_lineno = 73;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_31 = var_colCount;

    if ( tmp_args_element_name_31 == NULL )
    {
        Py_DECREF( tmp_called_name_16 );
        Py_DECREF( tmp_called_name_17 );
        Py_DECREF( tmp_args_element_name_30 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "colCount" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 73;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    frame_fcb3ff43bf41755469ee19bade68239f->m_frame.f_lineno = 73;
    {
        PyObject *call_args[] = { tmp_args_element_name_30, tmp_args_element_name_31 };
        tmp_args_element_name_29 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_17, call_args );
    }

    Py_DECREF( tmp_called_name_17 );
    Py_DECREF( tmp_args_element_name_30 );
    if ( tmp_args_element_name_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_16 );

        exception_lineno = 73;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    frame_fcb3ff43bf41755469ee19bade68239f->m_frame.f_lineno = 73;
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


        exception_lineno = 73;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_47 = GET_STRING_DICT_VALUE( moduledict_pieces$queen, (Nuitka_StringObject *)const_str_plain_board );

    if (unlikely( tmp_source_name_47 == NULL ))
    {
        tmp_source_name_47 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_board );
    }

    if ( tmp_source_name_47 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "board" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 74;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_18 = LOOKUP_ATTRIBUTE( tmp_source_name_47, const_str_plain_Grid );
    if ( tmp_called_name_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 74;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_48 = par_self;

    if ( tmp_source_name_48 == NULL )
    {
        Py_DECREF( tmp_called_name_18 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 74;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_32 = LOOKUP_ATTRIBUTE( tmp_source_name_48, const_str_plain_row );
    if ( tmp_args_element_name_32 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_18 );

        exception_lineno = 74;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_33 = var_colCount;

    if ( tmp_args_element_name_33 == NULL )
    {
        Py_DECREF( tmp_called_name_18 );
        Py_DECREF( tmp_args_element_name_32 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "colCount" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 74;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    frame_fcb3ff43bf41755469ee19bade68239f->m_frame.f_lineno = 74;
    {
        PyObject *call_args[] = { tmp_args_element_name_32, tmp_args_element_name_33 };
        tmp_source_name_46 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_18, call_args );
    }

    Py_DECREF( tmp_called_name_18 );
    Py_DECREF( tmp_args_element_name_32 );
    if ( tmp_source_name_46 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 74;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_value_8 = LOOKUP_ATTRIBUTE( tmp_source_name_46, const_str_plain_pieceStatus );
    Py_DECREF( tmp_source_name_46 );
    if ( tmp_cond_value_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 74;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_8 = CHECK_IF_TRUE( tmp_cond_value_8 );
    if ( tmp_cond_truth_8 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_8 );

        exception_lineno = 74;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_8 );
    if ( tmp_cond_truth_8 == 1 )
    {
        goto branch_yes_11;
    }
    else
    {
        goto branch_no_11;
    }
    branch_yes_11:;
    tmp_assign_source_28 = Py_True;
    {
        PyObject *old = var_pieceFound;
        var_pieceFound = tmp_assign_source_28;
        Py_INCREF( var_pieceFound );
        Py_XDECREF( old );
    }

    branch_no_11:;
    goto branch_end_10;
    branch_no_10:;
    tmp_assign_source_29 = const_int_pos_7;
    {
        PyObject *old = var_colCount;
        var_colCount = tmp_assign_source_29;
        Py_INCREF( var_colCount );
        Py_XDECREF( old );
    }

    tmp_assign_source_30 = Py_False;
    {
        PyObject *old = var_running;
        var_running = tmp_assign_source_30;
        Py_INCREF( var_running );
        Py_XDECREF( old );
    }

    branch_end_10:;
    tmp_cond_value_9 = var_pieceFound;

    if ( tmp_cond_value_9 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "pieceFound" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 79;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_9 = CHECK_IF_TRUE( tmp_cond_value_9 );
    if ( tmp_cond_truth_9 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 79;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_9 == 1 )
    {
        goto branch_yes_12;
    }
    else
    {
        goto branch_no_12;
    }
    branch_yes_12:;
    tmp_assign_source_31 = const_int_pos_7;
    {
        PyObject *old = var_colCount;
        var_colCount = tmp_assign_source_31;
        Py_INCREF( var_colCount );
        Py_XDECREF( old );
    }

    tmp_assign_source_32 = Py_False;
    {
        PyObject *old = var_running;
        var_running = tmp_assign_source_32;
        Py_INCREF( var_running );
        Py_XDECREF( old );
    }

    branch_no_12:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_3;
    loop_end_3:;
    tmp_source_name_49 = par_self;

    if ( tmp_source_name_49 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 84;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_33 = LOOKUP_ATTRIBUTE( tmp_source_name_49, const_str_plain_col );
    if ( tmp_assign_source_33 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_colCount;
        var_colCount = tmp_assign_source_33;
        Py_XDECREF( old );
    }

    tmp_assign_source_34 = Py_True;
    {
        PyObject *old = var_running;
        var_running = tmp_assign_source_34;
        Py_INCREF( var_running );
        Py_XDECREF( old );
    }

    tmp_assign_source_35 = Py_False;
    {
        PyObject *old = var_pieceFound;
        var_pieceFound = tmp_assign_source_35;
        Py_INCREF( var_pieceFound );
        Py_XDECREF( old );
    }

    loop_start_4:;
    tmp_left_name_10 = var_colCount;

    if ( tmp_left_name_10 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "colCount" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 87;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_10 = const_int_pos_1;
    tmp_compexpr_left_4 = BINARY_OPERATION_SUB( tmp_left_name_10, tmp_right_name_10 );
    if ( tmp_compexpr_left_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 87;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_4 = const_int_neg_1;
    tmp_and_left_value_4 = RICH_COMPARE_GT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
    Py_DECREF( tmp_compexpr_left_4 );
    if ( tmp_and_left_value_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 87;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_4 = CHECK_IF_TRUE( tmp_and_left_value_4 );
    if ( tmp_and_left_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_4 );

        exception_lineno = 87;
        type_description_1 = "oooooooo";
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
    tmp_and_right_value_4 = var_running;

    if ( tmp_and_right_value_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "running" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 87;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_and_right_value_4 );
    tmp_cond_value_10 = tmp_and_right_value_4;
    goto and_end_4;
    and_left_4:;
    tmp_cond_value_10 = tmp_and_left_value_4;
    and_end_4:;
    tmp_cond_truth_10 = CHECK_IF_TRUE( tmp_cond_value_10 );
    if ( tmp_cond_truth_10 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_10 );

        exception_lineno = 87;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_10 );
    if ( tmp_cond_truth_10 == 1 )
    {
        goto branch_no_13;
    }
    else
    {
        goto branch_yes_13;
    }
    branch_yes_13:;
    goto loop_end_4;
    branch_no_13:;
    tmp_left_name_11 = var_colCount;

    if ( tmp_left_name_11 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "colCount" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 88;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_11 = const_int_pos_1;
    tmp_result = BINARY_OPERATION_INPLACE( PyNumber_InPlaceSubtract, &tmp_left_name_11, tmp_right_name_11 );
    tmp_assign_source_36 = tmp_left_name_11;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 88;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    var_colCount = tmp_assign_source_36;

    tmp_source_name_52 = GET_STRING_DICT_VALUE( moduledict_pieces$queen, (Nuitka_StringObject *)const_str_plain_board );

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

        exception_lineno = 90;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_19 = LOOKUP_ATTRIBUTE( tmp_source_name_52, const_str_plain_Grid );
    if ( tmp_called_name_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 90;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_53 = par_self;

    if ( tmp_source_name_53 == NULL )
    {
        Py_DECREF( tmp_called_name_19 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 90;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_34 = LOOKUP_ATTRIBUTE( tmp_source_name_53, const_str_plain_row );
    if ( tmp_args_element_name_34 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_19 );

        exception_lineno = 90;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_35 = var_colCount;

    if ( tmp_args_element_name_35 == NULL )
    {
        Py_DECREF( tmp_called_name_19 );
        Py_DECREF( tmp_args_element_name_34 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "colCount" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 90;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    frame_fcb3ff43bf41755469ee19bade68239f->m_frame.f_lineno = 90;
    {
        PyObject *call_args[] = { tmp_args_element_name_34, tmp_args_element_name_35 };
        tmp_source_name_51 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_19, call_args );
    }

    Py_DECREF( tmp_called_name_19 );
    Py_DECREF( tmp_args_element_name_34 );
    if ( tmp_source_name_51 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 90;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_50 = LOOKUP_ATTRIBUTE( tmp_source_name_51, const_str_plain_piece );
    Py_DECREF( tmp_source_name_51 );
    if ( tmp_source_name_50 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 90;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_left_4 = LOOKUP_ATTRIBUTE( tmp_source_name_50, const_str_plain_color );
    Py_DECREF( tmp_source_name_50 );
    if ( tmp_compare_left_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 90;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_54 = par_self;

    if ( tmp_source_name_54 == NULL )
    {
        Py_DECREF( tmp_compare_left_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 90;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_4 = LOOKUP_ATTRIBUTE( tmp_source_name_54, const_str_plain_color );
    if ( tmp_compare_right_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_4 );

        exception_lineno = 90;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cmp_NotEq_4 = RICH_COMPARE_BOOL_NE( tmp_compare_left_4, tmp_compare_right_4 );
    Py_DECREF( tmp_compare_left_4 );
    Py_DECREF( tmp_compare_right_4 );
    if ( tmp_cmp_NotEq_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 90;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_NotEq_4 == 1 )
    {
        goto branch_yes_14;
    }
    else
    {
        goto branch_no_14;
    }
    branch_yes_14:;
    tmp_assattr_name_7 = Py_True;
    tmp_source_name_55 = GET_STRING_DICT_VALUE( moduledict_pieces$queen, (Nuitka_StringObject *)const_str_plain_board );

    if (unlikely( tmp_source_name_55 == NULL ))
    {
        tmp_source_name_55 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_board );
    }

    if ( tmp_source_name_55 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "board" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 91;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_20 = LOOKUP_ATTRIBUTE( tmp_source_name_55, const_str_plain_Grid );
    if ( tmp_called_name_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 91;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_56 = par_self;

    if ( tmp_source_name_56 == NULL )
    {
        Py_DECREF( tmp_called_name_20 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 91;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_36 = LOOKUP_ATTRIBUTE( tmp_source_name_56, const_str_plain_row );
    if ( tmp_args_element_name_36 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_20 );

        exception_lineno = 91;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_37 = var_colCount;

    if ( tmp_args_element_name_37 == NULL )
    {
        Py_DECREF( tmp_called_name_20 );
        Py_DECREF( tmp_args_element_name_36 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "colCount" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 91;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    frame_fcb3ff43bf41755469ee19bade68239f->m_frame.f_lineno = 91;
    {
        PyObject *call_args[] = { tmp_args_element_name_36, tmp_args_element_name_37 };
        tmp_assattr_target_7 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_20, call_args );
    }

    Py_DECREF( tmp_called_name_20 );
    Py_DECREF( tmp_args_element_name_36 );
    if ( tmp_assattr_target_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 91;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_7, const_str_plain_des, tmp_assattr_name_7 );
    Py_DECREF( tmp_assattr_target_7 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 91;
        type_description_1 = "oooooooo";
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

        exception_lineno = 92;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_57 = GET_STRING_DICT_VALUE( moduledict_pieces$queen, (Nuitka_StringObject *)const_str_plain_board );

    if (unlikely( tmp_source_name_57 == NULL ))
    {
        tmp_source_name_57 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_board );
    }

    if ( tmp_source_name_57 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "board" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 92;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_21 = LOOKUP_ATTRIBUTE( tmp_source_name_57, const_str_plain_Grid );
    if ( tmp_called_name_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 92;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_58 = par_self;

    if ( tmp_source_name_58 == NULL )
    {
        Py_DECREF( tmp_called_name_21 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 92;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_38 = LOOKUP_ATTRIBUTE( tmp_source_name_58, const_str_plain_row );
    if ( tmp_args_element_name_38 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_21 );

        exception_lineno = 92;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_39 = var_colCount;

    if ( tmp_args_element_name_39 == NULL )
    {
        Py_DECREF( tmp_called_name_21 );
        Py_DECREF( tmp_args_element_name_38 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "colCount" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 92;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    frame_fcb3ff43bf41755469ee19bade68239f->m_frame.f_lineno = 92;
    {
        PyObject *call_args[] = { tmp_args_element_name_38, tmp_args_element_name_39 };
        tmp_assattr_target_8 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_21, call_args );
    }

    Py_DECREF( tmp_called_name_21 );
    Py_DECREF( tmp_args_element_name_38 );
    if ( tmp_assattr_target_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 92;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_8, const_str_plain_option, tmp_assattr_name_8 );
    Py_DECREF( tmp_assattr_target_8 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 92;
        type_description_1 = "oooooooo";
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

        exception_lineno = 93;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_12 = const_int_pos_1;
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_12, tmp_right_name_12 );
    tmp_assign_source_37 = tmp_left_name_12;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 93;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    var_optionCounter = tmp_assign_source_37;

    tmp_source_name_59 = var_availMoves;

    if ( tmp_source_name_59 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "availMoves" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 94;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_22 = LOOKUP_ATTRIBUTE( tmp_source_name_59, const_str_plain_append );
    if ( tmp_called_name_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 94;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_60 = GET_STRING_DICT_VALUE( moduledict_pieces$queen, (Nuitka_StringObject *)const_str_plain_board );

    if (unlikely( tmp_source_name_60 == NULL ))
    {
        tmp_source_name_60 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_board );
    }

    if ( tmp_source_name_60 == NULL )
    {
        Py_DECREF( tmp_called_name_22 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "board" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 94;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_23 = LOOKUP_ATTRIBUTE( tmp_source_name_60, const_str_plain_Grid );
    if ( tmp_called_name_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_22 );

        exception_lineno = 94;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_61 = par_self;

    if ( tmp_source_name_61 == NULL )
    {
        Py_DECREF( tmp_called_name_22 );
        Py_DECREF( tmp_called_name_23 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 94;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_41 = LOOKUP_ATTRIBUTE( tmp_source_name_61, const_str_plain_row );
    if ( tmp_args_element_name_41 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_22 );
        Py_DECREF( tmp_called_name_23 );

        exception_lineno = 94;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_42 = var_colCount;

    if ( tmp_args_element_name_42 == NULL )
    {
        Py_DECREF( tmp_called_name_22 );
        Py_DECREF( tmp_called_name_23 );
        Py_DECREF( tmp_args_element_name_41 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "colCount" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 94;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    frame_fcb3ff43bf41755469ee19bade68239f->m_frame.f_lineno = 94;
    {
        PyObject *call_args[] = { tmp_args_element_name_41, tmp_args_element_name_42 };
        tmp_args_element_name_40 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_23, call_args );
    }

    Py_DECREF( tmp_called_name_23 );
    Py_DECREF( tmp_args_element_name_41 );
    if ( tmp_args_element_name_40 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_22 );

        exception_lineno = 94;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    frame_fcb3ff43bf41755469ee19bade68239f->m_frame.f_lineno = 94;
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


        exception_lineno = 94;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_63 = GET_STRING_DICT_VALUE( moduledict_pieces$queen, (Nuitka_StringObject *)const_str_plain_board );

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

        exception_lineno = 95;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_24 = LOOKUP_ATTRIBUTE( tmp_source_name_63, const_str_plain_Grid );
    if ( tmp_called_name_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 95;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_64 = par_self;

    if ( tmp_source_name_64 == NULL )
    {
        Py_DECREF( tmp_called_name_24 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 95;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_43 = LOOKUP_ATTRIBUTE( tmp_source_name_64, const_str_plain_row );
    if ( tmp_args_element_name_43 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_24 );

        exception_lineno = 95;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_44 = var_colCount;

    if ( tmp_args_element_name_44 == NULL )
    {
        Py_DECREF( tmp_called_name_24 );
        Py_DECREF( tmp_args_element_name_43 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "colCount" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 95;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    frame_fcb3ff43bf41755469ee19bade68239f->m_frame.f_lineno = 95;
    {
        PyObject *call_args[] = { tmp_args_element_name_43, tmp_args_element_name_44 };
        tmp_source_name_62 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_24, call_args );
    }

    Py_DECREF( tmp_called_name_24 );
    Py_DECREF( tmp_args_element_name_43 );
    if ( tmp_source_name_62 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 95;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_value_11 = LOOKUP_ATTRIBUTE( tmp_source_name_62, const_str_plain_pieceStatus );
    Py_DECREF( tmp_source_name_62 );
    if ( tmp_cond_value_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 95;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_11 = CHECK_IF_TRUE( tmp_cond_value_11 );
    if ( tmp_cond_truth_11 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_11 );

        exception_lineno = 95;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_11 );
    if ( tmp_cond_truth_11 == 1 )
    {
        goto branch_yes_15;
    }
    else
    {
        goto branch_no_15;
    }
    branch_yes_15:;
    tmp_assign_source_38 = Py_True;
    {
        PyObject *old = var_pieceFound;
        var_pieceFound = tmp_assign_source_38;
        Py_INCREF( var_pieceFound );
        Py_XDECREF( old );
    }

    branch_no_15:;
    goto branch_end_14;
    branch_no_14:;
    tmp_assign_source_39 = const_int_0;
    {
        PyObject *old = var_colCount;
        var_colCount = tmp_assign_source_39;
        Py_INCREF( var_colCount );
        Py_XDECREF( old );
    }

    tmp_assign_source_40 = Py_False;
    {
        PyObject *old = var_running;
        var_running = tmp_assign_source_40;
        Py_INCREF( var_running );
        Py_XDECREF( old );
    }

    branch_end_14:;
    tmp_cond_value_12 = var_pieceFound;

    if ( tmp_cond_value_12 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "pieceFound" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 100;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_12 = CHECK_IF_TRUE( tmp_cond_value_12 );
    if ( tmp_cond_truth_12 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 100;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_12 == 1 )
    {
        goto branch_yes_16;
    }
    else
    {
        goto branch_no_16;
    }
    branch_yes_16:;
    tmp_assign_source_41 = const_int_0;
    {
        PyObject *old = var_colCount;
        var_colCount = tmp_assign_source_41;
        Py_INCREF( var_colCount );
        Py_XDECREF( old );
    }

    tmp_assign_source_42 = Py_False;
    {
        PyObject *old = var_running;
        var_running = tmp_assign_source_42;
        Py_INCREF( var_running );
        Py_XDECREF( old );
    }

    branch_no_16:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 87;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_4;
    loop_end_4:;
    tmp_assign_source_43 = Py_False;
    {
        PyObject *old = var_pieceFound;
        var_pieceFound = tmp_assign_source_43;
        Py_INCREF( var_pieceFound );
        Py_XDECREF( old );
    }

    tmp_assign_source_44 = Py_True;
    {
        PyObject *old = var_running;
        var_running = tmp_assign_source_44;
        Py_INCREF( var_running );
        Py_XDECREF( old );
    }

    tmp_assign_source_45 = Py_False;
    assert( var_edgeFound == NULL );
    Py_INCREF( tmp_assign_source_45 );
    var_edgeFound = tmp_assign_source_45;

    tmp_source_name_65 = par_self;

    if ( tmp_source_name_65 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 112;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_46 = LOOKUP_ATTRIBUTE( tmp_source_name_65, const_str_plain_row );
    if ( tmp_assign_source_46 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 112;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_rowCount;
        var_rowCount = tmp_assign_source_46;
        Py_XDECREF( old );
    }

    tmp_source_name_66 = par_self;

    if ( tmp_source_name_66 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 113;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_47 = LOOKUP_ATTRIBUTE( tmp_source_name_66, const_str_plain_col );
    if ( tmp_assign_source_47 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 113;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_colCount;
        var_colCount = tmp_assign_source_47;
        Py_XDECREF( old );
    }

    tmp_source_name_67 = par_self;

    if ( tmp_source_name_67 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 116;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_left_5 = LOOKUP_ATTRIBUTE( tmp_source_name_67, const_str_plain_row );
    if ( tmp_compare_left_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 116;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_5 = const_int_0;
    tmp_cmp_Gt_1 = RICH_COMPARE_BOOL_GT( tmp_compare_left_5, tmp_compare_right_5 );
    Py_DECREF( tmp_compare_left_5 );
    if ( tmp_cmp_Gt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 116;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Gt_1 == 1 )
    {
        goto branch_yes_17;
    }
    else
    {
        goto branch_no_17;
    }
    branch_yes_17:;
    tmp_source_name_68 = par_self;

    if ( tmp_source_name_68 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 117;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_left_6 = LOOKUP_ATTRIBUTE( tmp_source_name_68, const_str_plain_col );
    if ( tmp_compare_left_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 117;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_6 = const_int_0;
    tmp_cmp_Gt_2 = RICH_COMPARE_BOOL_GT( tmp_compare_left_6, tmp_compare_right_6 );
    Py_DECREF( tmp_compare_left_6 );
    if ( tmp_cmp_Gt_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 117;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Gt_2 == 1 )
    {
        goto branch_yes_18;
    }
    else
    {
        goto branch_no_18;
    }
    branch_yes_18:;
    loop_start_5:;
    tmp_left_name_13 = var_rowCount;

    if ( tmp_left_name_13 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "rowCount" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 119;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_13 = const_int_pos_1;
    tmp_compexpr_left_5 = BINARY_OPERATION_SUB( tmp_left_name_13, tmp_right_name_13 );
    if ( tmp_compexpr_left_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 119;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_5 = const_int_neg_1;
    tmp_or_left_value_1 = RICH_COMPARE_GT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
    Py_DECREF( tmp_compexpr_left_5 );
    if ( tmp_or_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 119;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    if ( tmp_or_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_or_left_value_1 );

        exception_lineno = 119;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_or_left_truth_1 == 1 )
    {
        goto or_left_1;
    }
    else
    {
        goto or_right_1;
    }
    or_right_1:;
    Py_DECREF( tmp_or_left_value_1 );
    tmp_left_name_14 = var_colCount;

    if ( tmp_left_name_14 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "colCount" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 119;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_14 = const_int_pos_1;
    tmp_compexpr_left_6 = BINARY_OPERATION_SUB( tmp_left_name_14, tmp_right_name_14 );
    if ( tmp_compexpr_left_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 119;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_6 = const_int_neg_1;
    tmp_or_right_value_1 = RICH_COMPARE_GT( tmp_compexpr_left_6, tmp_compexpr_right_6 );
    Py_DECREF( tmp_compexpr_left_6 );
    if ( tmp_or_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 119;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_value_5 = tmp_or_right_value_1;
    goto or_end_1;
    or_left_1:;
    tmp_and_left_value_5 = tmp_or_left_value_1;
    or_end_1:;
    tmp_and_left_truth_5 = CHECK_IF_TRUE( tmp_and_left_value_5 );
    if ( tmp_and_left_truth_5 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_5 );

        exception_lineno = 119;
        type_description_1 = "oooooooo";
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
    tmp_and_left_value_6 = var_running;

    if ( tmp_and_left_value_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "running" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 119;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_and_left_truth_6 = CHECK_IF_TRUE( tmp_and_left_value_6 );
    if ( tmp_and_left_truth_6 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 119;
        type_description_1 = "oooooooo";
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
    tmp_operand_name_1 = var_edgeFound;

    if ( tmp_operand_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "edgeFound" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 119;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_and_right_value_6 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_1 );
    if ( tmp_and_right_value_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 119;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_right_value_5 = tmp_and_right_value_6;
    goto and_end_6;
    and_left_6:;
    tmp_and_right_value_5 = tmp_and_left_value_6;
    and_end_6:;
    Py_INCREF( tmp_and_right_value_5 );
    tmp_cond_value_13 = tmp_and_right_value_5;
    goto and_end_5;
    and_left_5:;
    tmp_cond_value_13 = tmp_and_left_value_5;
    and_end_5:;
    tmp_cond_truth_13 = CHECK_IF_TRUE( tmp_cond_value_13 );
    if ( tmp_cond_truth_13 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_13 );

        exception_lineno = 119;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_13 );
    if ( tmp_cond_truth_13 == 1 )
    {
        goto branch_no_19;
    }
    else
    {
        goto branch_yes_19;
    }
    branch_yes_19:;
    goto loop_end_5;
    branch_no_19:;
    tmp_left_name_15 = var_rowCount;

    if ( tmp_left_name_15 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "rowCount" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 120;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_15 = const_int_pos_1;
    tmp_result = BINARY_OPERATION_INPLACE( PyNumber_InPlaceSubtract, &tmp_left_name_15, tmp_right_name_15 );
    tmp_assign_source_48 = tmp_left_name_15;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 120;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    var_rowCount = tmp_assign_source_48;

    tmp_left_name_16 = var_colCount;

    if ( tmp_left_name_16 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "colCount" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 121;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_16 = const_int_pos_1;
    tmp_result = BINARY_OPERATION_INPLACE( PyNumber_InPlaceSubtract, &tmp_left_name_16, tmp_right_name_16 );
    tmp_assign_source_49 = tmp_left_name_16;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 121;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    var_colCount = tmp_assign_source_49;

    tmp_compexpr_left_7 = var_colCount;

    CHECK_OBJECT( tmp_compexpr_left_7 );
    tmp_compexpr_right_7 = const_int_neg_1;
    tmp_or_left_value_2 = RICH_COMPARE_EQ( tmp_compexpr_left_7, tmp_compexpr_right_7 );
    if ( tmp_or_left_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 122;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_or_left_truth_2 = CHECK_IF_TRUE( tmp_or_left_value_2 );
    if ( tmp_or_left_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_or_left_value_2 );

        exception_lineno = 122;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_or_left_truth_2 == 1 )
    {
        goto or_left_2;
    }
    else
    {
        goto or_right_2;
    }
    or_right_2:;
    Py_DECREF( tmp_or_left_value_2 );
    tmp_compexpr_left_8 = var_rowCount;

    if ( tmp_compexpr_left_8 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "rowCount" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 122;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_right_8 = const_int_neg_1;
    tmp_or_right_value_2 = RICH_COMPARE_EQ( tmp_compexpr_left_8, tmp_compexpr_right_8 );
    if ( tmp_or_right_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 122;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_value_14 = tmp_or_right_value_2;
    goto or_end_2;
    or_left_2:;
    tmp_cond_value_14 = tmp_or_left_value_2;
    or_end_2:;
    tmp_cond_truth_14 = CHECK_IF_TRUE( tmp_cond_value_14 );
    if ( tmp_cond_truth_14 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_14 );

        exception_lineno = 122;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_14 );
    if ( tmp_cond_truth_14 == 1 )
    {
        goto branch_yes_20;
    }
    else
    {
        goto branch_no_20;
    }
    branch_yes_20:;
    tmp_assign_source_50 = Py_True;
    {
        PyObject *old = var_edgeFound;
        var_edgeFound = tmp_assign_source_50;
        Py_INCREF( var_edgeFound );
        Py_XDECREF( old );
    }

    goto branch_end_20;
    branch_no_20:;
    tmp_source_name_71 = GET_STRING_DICT_VALUE( moduledict_pieces$queen, (Nuitka_StringObject *)const_str_plain_board );

    if (unlikely( tmp_source_name_71 == NULL ))
    {
        tmp_source_name_71 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_board );
    }

    if ( tmp_source_name_71 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "board" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 125;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_25 = LOOKUP_ATTRIBUTE( tmp_source_name_71, const_str_plain_Grid );
    if ( tmp_called_name_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 125;
        type_description_1 = "oooooooo";
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

        exception_lineno = 125;
        type_description_1 = "oooooooo";
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

        exception_lineno = 125;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    frame_fcb3ff43bf41755469ee19bade68239f->m_frame.f_lineno = 125;
    {
        PyObject *call_args[] = { tmp_args_element_name_45, tmp_args_element_name_46 };
        tmp_source_name_70 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_25, call_args );
    }

    Py_DECREF( tmp_called_name_25 );
    if ( tmp_source_name_70 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 125;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_69 = LOOKUP_ATTRIBUTE( tmp_source_name_70, const_str_plain_piece );
    Py_DECREF( tmp_source_name_70 );
    if ( tmp_source_name_69 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 125;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_left_7 = LOOKUP_ATTRIBUTE( tmp_source_name_69, const_str_plain_color );
    Py_DECREF( tmp_source_name_69 );
    if ( tmp_compare_left_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 125;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_72 = par_self;

    if ( tmp_source_name_72 == NULL )
    {
        Py_DECREF( tmp_compare_left_7 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 125;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_7 = LOOKUP_ATTRIBUTE( tmp_source_name_72, const_str_plain_color );
    if ( tmp_compare_right_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_7 );

        exception_lineno = 125;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cmp_NotEq_5 = RICH_COMPARE_BOOL_NE( tmp_compare_left_7, tmp_compare_right_7 );
    Py_DECREF( tmp_compare_left_7 );
    Py_DECREF( tmp_compare_right_7 );
    if ( tmp_cmp_NotEq_5 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 125;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_NotEq_5 == 1 )
    {
        goto branch_yes_21;
    }
    else
    {
        goto branch_no_21;
    }
    branch_yes_21:;
    tmp_assattr_name_9 = Py_True;
    tmp_source_name_73 = GET_STRING_DICT_VALUE( moduledict_pieces$queen, (Nuitka_StringObject *)const_str_plain_board );

    if (unlikely( tmp_source_name_73 == NULL ))
    {
        tmp_source_name_73 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_board );
    }

    if ( tmp_source_name_73 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "board" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 126;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_26 = LOOKUP_ATTRIBUTE( tmp_source_name_73, const_str_plain_Grid );
    if ( tmp_called_name_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 126;
        type_description_1 = "oooooooo";
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

        exception_lineno = 126;
        type_description_1 = "oooooooo";
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

        exception_lineno = 126;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    frame_fcb3ff43bf41755469ee19bade68239f->m_frame.f_lineno = 126;
    {
        PyObject *call_args[] = { tmp_args_element_name_47, tmp_args_element_name_48 };
        tmp_assattr_target_9 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_26, call_args );
    }

    Py_DECREF( tmp_called_name_26 );
    if ( tmp_assattr_target_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 126;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_9, const_str_plain_des, tmp_assattr_name_9 );
    Py_DECREF( tmp_assattr_target_9 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 126;
        type_description_1 = "oooooooo";
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

        exception_lineno = 127;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_74 = GET_STRING_DICT_VALUE( moduledict_pieces$queen, (Nuitka_StringObject *)const_str_plain_board );

    if (unlikely( tmp_source_name_74 == NULL ))
    {
        tmp_source_name_74 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_board );
    }

    if ( tmp_source_name_74 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "board" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 127;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_27 = LOOKUP_ATTRIBUTE( tmp_source_name_74, const_str_plain_Grid );
    if ( tmp_called_name_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 127;
        type_description_1 = "oooooooo";
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

        exception_lineno = 127;
        type_description_1 = "oooooooo";
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

        exception_lineno = 127;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    frame_fcb3ff43bf41755469ee19bade68239f->m_frame.f_lineno = 127;
    {
        PyObject *call_args[] = { tmp_args_element_name_49, tmp_args_element_name_50 };
        tmp_assattr_target_10 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_27, call_args );
    }

    Py_DECREF( tmp_called_name_27 );
    if ( tmp_assattr_target_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 127;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_10, const_str_plain_option, tmp_assattr_name_10 );
    Py_DECREF( tmp_assattr_target_10 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 127;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_17 = var_optionCounter;

    if ( tmp_left_name_17 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "optionCounter" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 128;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_17 = const_int_pos_1;
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_17, tmp_right_name_17 );
    tmp_assign_source_51 = tmp_left_name_17;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 128;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    var_optionCounter = tmp_assign_source_51;

    tmp_source_name_75 = var_availMoves;

    if ( tmp_source_name_75 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "availMoves" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 129;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_28 = LOOKUP_ATTRIBUTE( tmp_source_name_75, const_str_plain_append );
    if ( tmp_called_name_28 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 129;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_76 = GET_STRING_DICT_VALUE( moduledict_pieces$queen, (Nuitka_StringObject *)const_str_plain_board );

    if (unlikely( tmp_source_name_76 == NULL ))
    {
        tmp_source_name_76 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_board );
    }

    if ( tmp_source_name_76 == NULL )
    {
        Py_DECREF( tmp_called_name_28 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "board" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 129;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_29 = LOOKUP_ATTRIBUTE( tmp_source_name_76, const_str_plain_Grid );
    if ( tmp_called_name_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_28 );

        exception_lineno = 129;
        type_description_1 = "oooooooo";
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

        exception_lineno = 129;
        type_description_1 = "oooooooo";
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

        exception_lineno = 129;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    frame_fcb3ff43bf41755469ee19bade68239f->m_frame.f_lineno = 129;
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

        exception_lineno = 129;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    frame_fcb3ff43bf41755469ee19bade68239f->m_frame.f_lineno = 129;
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


        exception_lineno = 129;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_78 = GET_STRING_DICT_VALUE( moduledict_pieces$queen, (Nuitka_StringObject *)const_str_plain_board );

    if (unlikely( tmp_source_name_78 == NULL ))
    {
        tmp_source_name_78 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_board );
    }

    if ( tmp_source_name_78 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "board" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 130;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_30 = LOOKUP_ATTRIBUTE( tmp_source_name_78, const_str_plain_Grid );
    if ( tmp_called_name_30 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 130;
        type_description_1 = "oooooooo";
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

        exception_lineno = 130;
        type_description_1 = "oooooooo";
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

        exception_lineno = 130;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    frame_fcb3ff43bf41755469ee19bade68239f->m_frame.f_lineno = 130;
    {
        PyObject *call_args[] = { tmp_args_element_name_54, tmp_args_element_name_55 };
        tmp_source_name_77 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_30, call_args );
    }

    Py_DECREF( tmp_called_name_30 );
    if ( tmp_source_name_77 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 130;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_value_15 = LOOKUP_ATTRIBUTE( tmp_source_name_77, const_str_plain_pieceStatus );
    Py_DECREF( tmp_source_name_77 );
    if ( tmp_cond_value_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 130;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_15 = CHECK_IF_TRUE( tmp_cond_value_15 );
    if ( tmp_cond_truth_15 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_15 );

        exception_lineno = 130;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_15 );
    if ( tmp_cond_truth_15 == 1 )
    {
        goto branch_yes_22;
    }
    else
    {
        goto branch_no_22;
    }
    branch_yes_22:;
    tmp_assign_source_52 = Py_True;
    {
        PyObject *old = var_pieceFound;
        var_pieceFound = tmp_assign_source_52;
        Py_INCREF( var_pieceFound );
        Py_XDECREF( old );
    }

    branch_no_22:;
    goto branch_end_21;
    branch_no_21:;
    tmp_assign_source_53 = const_int_0;
    {
        PyObject *old = var_rowCount;
        var_rowCount = tmp_assign_source_53;
        Py_INCREF( var_rowCount );
        Py_XDECREF( old );
    }

    tmp_assign_source_54 = const_int_0;
    {
        PyObject *old = var_colCount;
        var_colCount = tmp_assign_source_54;
        Py_INCREF( var_colCount );
        Py_XDECREF( old );
    }

    tmp_assign_source_55 = Py_False;
    {
        PyObject *old = var_running;
        var_running = tmp_assign_source_55;
        Py_INCREF( var_running );
        Py_XDECREF( old );
    }

    branch_end_21:;
    branch_end_20:;
    tmp_cond_value_16 = var_pieceFound;

    if ( tmp_cond_value_16 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "pieceFound" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 138;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_16 = CHECK_IF_TRUE( tmp_cond_value_16 );
    if ( tmp_cond_truth_16 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 138;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_16 == 1 )
    {
        goto branch_yes_23;
    }
    else
    {
        goto branch_no_23;
    }
    branch_yes_23:;
    tmp_assign_source_56 = const_int_0;
    {
        PyObject *old = var_rowCount;
        var_rowCount = tmp_assign_source_56;
        Py_INCREF( var_rowCount );
        Py_XDECREF( old );
    }

    tmp_assign_source_57 = const_int_0;
    {
        PyObject *old = var_colCount;
        var_colCount = tmp_assign_source_57;
        Py_INCREF( var_colCount );
        Py_XDECREF( old );
    }

    tmp_assign_source_58 = Py_False;
    {
        PyObject *old = var_running;
        var_running = tmp_assign_source_58;
        Py_INCREF( var_running );
        Py_XDECREF( old );
    }

    branch_no_23:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 119;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_5;
    loop_end_5:;
    branch_no_18:;
    tmp_source_name_79 = par_self;

    if ( tmp_source_name_79 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 144;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_59 = LOOKUP_ATTRIBUTE( tmp_source_name_79, const_str_plain_row );
    if ( tmp_assign_source_59 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 144;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_rowCount;
        var_rowCount = tmp_assign_source_59;
        Py_XDECREF( old );
    }

    tmp_source_name_80 = par_self;

    if ( tmp_source_name_80 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 145;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_60 = LOOKUP_ATTRIBUTE( tmp_source_name_80, const_str_plain_col );
    if ( tmp_assign_source_60 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 145;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_colCount;
        var_colCount = tmp_assign_source_60;
        Py_XDECREF( old );
    }

    tmp_assign_source_61 = Py_False;
    {
        PyObject *old = var_edgeFound;
        var_edgeFound = tmp_assign_source_61;
        Py_INCREF( var_edgeFound );
        Py_XDECREF( old );
    }

    tmp_assign_source_62 = Py_True;
    {
        PyObject *old = var_running;
        var_running = tmp_assign_source_62;
        Py_INCREF( var_running );
        Py_XDECREF( old );
    }

    tmp_assign_source_63 = Py_False;
    {
        PyObject *old = var_pieceFound;
        var_pieceFound = tmp_assign_source_63;
        Py_INCREF( var_pieceFound );
        Py_XDECREF( old );
    }

    tmp_source_name_81 = par_self;

    if ( tmp_source_name_81 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 150;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_left_8 = LOOKUP_ATTRIBUTE( tmp_source_name_81, const_str_plain_col );
    if ( tmp_compare_left_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 150;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_8 = const_int_pos_7;
    tmp_cmp_Lt_1 = RICH_COMPARE_BOOL_LT( tmp_compare_left_8, tmp_compare_right_8 );
    Py_DECREF( tmp_compare_left_8 );
    if ( tmp_cmp_Lt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 150;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Lt_1 == 1 )
    {
        goto branch_yes_24;
    }
    else
    {
        goto branch_no_24;
    }
    branch_yes_24:;
    loop_start_6:;
    tmp_left_name_18 = var_rowCount;

    if ( tmp_left_name_18 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "rowCount" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 152;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_18 = const_int_pos_1;
    tmp_compexpr_left_9 = BINARY_OPERATION_SUB( tmp_left_name_18, tmp_right_name_18 );
    if ( tmp_compexpr_left_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 152;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_9 = const_int_neg_1;
    tmp_or_left_value_3 = RICH_COMPARE_GT( tmp_compexpr_left_9, tmp_compexpr_right_9 );
    Py_DECREF( tmp_compexpr_left_9 );
    if ( tmp_or_left_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 152;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_or_left_truth_3 = CHECK_IF_TRUE( tmp_or_left_value_3 );
    if ( tmp_or_left_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_or_left_value_3 );

        exception_lineno = 152;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_or_left_truth_3 == 1 )
    {
        goto or_left_3;
    }
    else
    {
        goto or_right_3;
    }
    or_right_3:;
    Py_DECREF( tmp_or_left_value_3 );
    tmp_left_name_19 = var_colCount;

    if ( tmp_left_name_19 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "colCount" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 152;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_19 = const_int_pos_1;
    tmp_compexpr_left_10 = BINARY_OPERATION_ADD( tmp_left_name_19, tmp_right_name_19 );
    if ( tmp_compexpr_left_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 152;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_10 = const_int_pos_8;
    tmp_or_right_value_3 = RICH_COMPARE_LT( tmp_compexpr_left_10, tmp_compexpr_right_10 );
    Py_DECREF( tmp_compexpr_left_10 );
    if ( tmp_or_right_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 152;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_value_7 = tmp_or_right_value_3;
    goto or_end_3;
    or_left_3:;
    tmp_and_left_value_7 = tmp_or_left_value_3;
    or_end_3:;
    tmp_and_left_truth_7 = CHECK_IF_TRUE( tmp_and_left_value_7 );
    if ( tmp_and_left_truth_7 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_7 );

        exception_lineno = 152;
        type_description_1 = "oooooooo";
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
    tmp_and_left_value_8 = var_running;

    if ( tmp_and_left_value_8 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "running" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 152;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_and_left_truth_8 = CHECK_IF_TRUE( tmp_and_left_value_8 );
    if ( tmp_and_left_truth_8 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 152;
        type_description_1 = "oooooooo";
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
    tmp_operand_name_2 = var_edgeFound;

    if ( tmp_operand_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "edgeFound" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 152;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_and_right_value_8 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_2 );
    if ( tmp_and_right_value_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 152;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_right_value_7 = tmp_and_right_value_8;
    goto and_end_8;
    and_left_8:;
    tmp_and_right_value_7 = tmp_and_left_value_8;
    and_end_8:;
    Py_INCREF( tmp_and_right_value_7 );
    tmp_cond_value_17 = tmp_and_right_value_7;
    goto and_end_7;
    and_left_7:;
    tmp_cond_value_17 = tmp_and_left_value_7;
    and_end_7:;
    tmp_cond_truth_17 = CHECK_IF_TRUE( tmp_cond_value_17 );
    if ( tmp_cond_truth_17 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_17 );

        exception_lineno = 152;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_17 );
    if ( tmp_cond_truth_17 == 1 )
    {
        goto branch_no_25;
    }
    else
    {
        goto branch_yes_25;
    }
    branch_yes_25:;
    goto loop_end_6;
    branch_no_25:;
    tmp_left_name_20 = var_rowCount;

    if ( tmp_left_name_20 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "rowCount" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 153;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_20 = const_int_pos_1;
    tmp_result = BINARY_OPERATION_INPLACE( PyNumber_InPlaceSubtract, &tmp_left_name_20, tmp_right_name_20 );
    tmp_assign_source_64 = tmp_left_name_20;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 153;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    var_rowCount = tmp_assign_source_64;

    tmp_left_name_21 = var_colCount;

    if ( tmp_left_name_21 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "colCount" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 154;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_21 = const_int_pos_1;
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_21, tmp_right_name_21 );
    tmp_assign_source_65 = tmp_left_name_21;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 154;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    var_colCount = tmp_assign_source_65;

    tmp_compexpr_left_11 = var_colCount;

    CHECK_OBJECT( tmp_compexpr_left_11 );
    tmp_compexpr_right_11 = const_int_pos_7;
    tmp_or_left_value_4 = RICH_COMPARE_EQ( tmp_compexpr_left_11, tmp_compexpr_right_11 );
    if ( tmp_or_left_value_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 155;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_or_left_truth_4 = CHECK_IF_TRUE( tmp_or_left_value_4 );
    if ( tmp_or_left_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_or_left_value_4 );

        exception_lineno = 155;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_or_left_truth_4 == 1 )
    {
        goto or_left_4;
    }
    else
    {
        goto or_right_4;
    }
    or_right_4:;
    Py_DECREF( tmp_or_left_value_4 );
    tmp_compexpr_left_12 = var_rowCount;

    if ( tmp_compexpr_left_12 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "rowCount" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 155;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_right_12 = const_int_0;
    tmp_or_right_value_4 = RICH_COMPARE_EQ( tmp_compexpr_left_12, tmp_compexpr_right_12 );
    if ( tmp_or_right_value_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 155;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_value_18 = tmp_or_right_value_4;
    goto or_end_4;
    or_left_4:;
    tmp_cond_value_18 = tmp_or_left_value_4;
    or_end_4:;
    tmp_cond_truth_18 = CHECK_IF_TRUE( tmp_cond_value_18 );
    if ( tmp_cond_truth_18 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_18 );

        exception_lineno = 155;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_18 );
    if ( tmp_cond_truth_18 == 1 )
    {
        goto branch_yes_26;
    }
    else
    {
        goto branch_no_26;
    }
    branch_yes_26:;
    tmp_assign_source_66 = Py_True;
    {
        PyObject *old = var_edgeFound;
        var_edgeFound = tmp_assign_source_66;
        Py_INCREF( var_edgeFound );
        Py_XDECREF( old );
    }

    branch_no_26:;
    tmp_source_name_84 = GET_STRING_DICT_VALUE( moduledict_pieces$queen, (Nuitka_StringObject *)const_str_plain_board );

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

        exception_lineno = 157;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_31 = LOOKUP_ATTRIBUTE( tmp_source_name_84, const_str_plain_Grid );
    if ( tmp_called_name_31 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 157;
        type_description_1 = "oooooooo";
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

        exception_lineno = 157;
        type_description_1 = "oooooooo";
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

        exception_lineno = 157;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    frame_fcb3ff43bf41755469ee19bade68239f->m_frame.f_lineno = 157;
    {
        PyObject *call_args[] = { tmp_args_element_name_56, tmp_args_element_name_57 };
        tmp_source_name_83 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_31, call_args );
    }

    Py_DECREF( tmp_called_name_31 );
    if ( tmp_source_name_83 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 157;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_82 = LOOKUP_ATTRIBUTE( tmp_source_name_83, const_str_plain_piece );
    Py_DECREF( tmp_source_name_83 );
    if ( tmp_source_name_82 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 157;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_left_9 = LOOKUP_ATTRIBUTE( tmp_source_name_82, const_str_plain_color );
    Py_DECREF( tmp_source_name_82 );
    if ( tmp_compare_left_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 157;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_85 = par_self;

    if ( tmp_source_name_85 == NULL )
    {
        Py_DECREF( tmp_compare_left_9 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 157;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_9 = LOOKUP_ATTRIBUTE( tmp_source_name_85, const_str_plain_color );
    if ( tmp_compare_right_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_9 );

        exception_lineno = 157;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cmp_NotEq_6 = RICH_COMPARE_BOOL_NE( tmp_compare_left_9, tmp_compare_right_9 );
    Py_DECREF( tmp_compare_left_9 );
    Py_DECREF( tmp_compare_right_9 );
    if ( tmp_cmp_NotEq_6 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 157;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_NotEq_6 == 1 )
    {
        goto branch_yes_27;
    }
    else
    {
        goto branch_no_27;
    }
    branch_yes_27:;
    tmp_assattr_name_11 = Py_True;
    tmp_source_name_86 = GET_STRING_DICT_VALUE( moduledict_pieces$queen, (Nuitka_StringObject *)const_str_plain_board );

    if (unlikely( tmp_source_name_86 == NULL ))
    {
        tmp_source_name_86 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_board );
    }

    if ( tmp_source_name_86 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "board" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 158;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_32 = LOOKUP_ATTRIBUTE( tmp_source_name_86, const_str_plain_Grid );
    if ( tmp_called_name_32 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 158;
        type_description_1 = "oooooooo";
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

        exception_lineno = 158;
        type_description_1 = "oooooooo";
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

        exception_lineno = 158;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    frame_fcb3ff43bf41755469ee19bade68239f->m_frame.f_lineno = 158;
    {
        PyObject *call_args[] = { tmp_args_element_name_58, tmp_args_element_name_59 };
        tmp_assattr_target_11 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_32, call_args );
    }

    Py_DECREF( tmp_called_name_32 );
    if ( tmp_assattr_target_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 158;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_11, const_str_plain_des, tmp_assattr_name_11 );
    Py_DECREF( tmp_assattr_target_11 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 158;
        type_description_1 = "oooooooo";
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

        exception_lineno = 159;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_87 = GET_STRING_DICT_VALUE( moduledict_pieces$queen, (Nuitka_StringObject *)const_str_plain_board );

    if (unlikely( tmp_source_name_87 == NULL ))
    {
        tmp_source_name_87 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_board );
    }

    if ( tmp_source_name_87 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "board" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 159;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_33 = LOOKUP_ATTRIBUTE( tmp_source_name_87, const_str_plain_Grid );
    if ( tmp_called_name_33 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 159;
        type_description_1 = "oooooooo";
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

        exception_lineno = 159;
        type_description_1 = "oooooooo";
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

        exception_lineno = 159;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    frame_fcb3ff43bf41755469ee19bade68239f->m_frame.f_lineno = 159;
    {
        PyObject *call_args[] = { tmp_args_element_name_60, tmp_args_element_name_61 };
        tmp_assattr_target_12 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_33, call_args );
    }

    Py_DECREF( tmp_called_name_33 );
    if ( tmp_assattr_target_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 159;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_12, const_str_plain_option, tmp_assattr_name_12 );
    Py_DECREF( tmp_assattr_target_12 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 159;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_22 = var_optionCounter;

    if ( tmp_left_name_22 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "optionCounter" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 160;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_22 = const_int_pos_1;
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_22, tmp_right_name_22 );
    tmp_assign_source_67 = tmp_left_name_22;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 160;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    var_optionCounter = tmp_assign_source_67;

    tmp_source_name_88 = var_availMoves;

    if ( tmp_source_name_88 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "availMoves" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 161;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_34 = LOOKUP_ATTRIBUTE( tmp_source_name_88, const_str_plain_append );
    if ( tmp_called_name_34 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 161;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_89 = GET_STRING_DICT_VALUE( moduledict_pieces$queen, (Nuitka_StringObject *)const_str_plain_board );

    if (unlikely( tmp_source_name_89 == NULL ))
    {
        tmp_source_name_89 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_board );
    }

    if ( tmp_source_name_89 == NULL )
    {
        Py_DECREF( tmp_called_name_34 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "board" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 161;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_35 = LOOKUP_ATTRIBUTE( tmp_source_name_89, const_str_plain_Grid );
    if ( tmp_called_name_35 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_34 );

        exception_lineno = 161;
        type_description_1 = "oooooooo";
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

        exception_lineno = 161;
        type_description_1 = "oooooooo";
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

        exception_lineno = 161;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    frame_fcb3ff43bf41755469ee19bade68239f->m_frame.f_lineno = 161;
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

        exception_lineno = 161;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    frame_fcb3ff43bf41755469ee19bade68239f->m_frame.f_lineno = 161;
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


        exception_lineno = 161;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_91 = GET_STRING_DICT_VALUE( moduledict_pieces$queen, (Nuitka_StringObject *)const_str_plain_board );

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

        exception_lineno = 162;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_36 = LOOKUP_ATTRIBUTE( tmp_source_name_91, const_str_plain_Grid );
    if ( tmp_called_name_36 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 162;
        type_description_1 = "oooooooo";
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

        exception_lineno = 162;
        type_description_1 = "oooooooo";
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

        exception_lineno = 162;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    frame_fcb3ff43bf41755469ee19bade68239f->m_frame.f_lineno = 162;
    {
        PyObject *call_args[] = { tmp_args_element_name_65, tmp_args_element_name_66 };
        tmp_source_name_90 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_36, call_args );
    }

    Py_DECREF( tmp_called_name_36 );
    if ( tmp_source_name_90 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 162;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_value_19 = LOOKUP_ATTRIBUTE( tmp_source_name_90, const_str_plain_pieceStatus );
    Py_DECREF( tmp_source_name_90 );
    if ( tmp_cond_value_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 162;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_19 = CHECK_IF_TRUE( tmp_cond_value_19 );
    if ( tmp_cond_truth_19 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_19 );

        exception_lineno = 162;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_19 );
    if ( tmp_cond_truth_19 == 1 )
    {
        goto branch_yes_28;
    }
    else
    {
        goto branch_no_28;
    }
    branch_yes_28:;
    tmp_assign_source_68 = Py_True;
    {
        PyObject *old = var_pieceFound;
        var_pieceFound = tmp_assign_source_68;
        Py_INCREF( var_pieceFound );
        Py_XDECREF( old );
    }

    branch_no_28:;
    goto branch_end_27;
    branch_no_27:;
    tmp_assign_source_69 = const_int_0;
    {
        PyObject *old = var_rowCount;
        var_rowCount = tmp_assign_source_69;
        Py_INCREF( var_rowCount );
        Py_XDECREF( old );
    }

    tmp_assign_source_70 = const_int_pos_7;
    {
        PyObject *old = var_colCount;
        var_colCount = tmp_assign_source_70;
        Py_INCREF( var_colCount );
        Py_XDECREF( old );
    }

    tmp_assign_source_71 = Py_False;
    {
        PyObject *old = var_running;
        var_running = tmp_assign_source_71;
        Py_INCREF( var_running );
        Py_XDECREF( old );
    }

    branch_end_27:;
    tmp_cond_value_20 = var_pieceFound;

    if ( tmp_cond_value_20 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "pieceFound" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 170;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_20 = CHECK_IF_TRUE( tmp_cond_value_20 );
    if ( tmp_cond_truth_20 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 170;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_20 == 1 )
    {
        goto branch_yes_29;
    }
    else
    {
        goto branch_no_29;
    }
    branch_yes_29:;
    tmp_assign_source_72 = const_int_0;
    {
        PyObject *old = var_rowCount;
        var_rowCount = tmp_assign_source_72;
        Py_INCREF( var_rowCount );
        Py_XDECREF( old );
    }

    tmp_assign_source_73 = const_int_pos_7;
    {
        PyObject *old = var_colCount;
        var_colCount = tmp_assign_source_73;
        Py_INCREF( var_colCount );
        Py_XDECREF( old );
    }

    tmp_assign_source_74 = Py_False;
    {
        PyObject *old = var_running;
        var_running = tmp_assign_source_74;
        Py_INCREF( var_running );
        Py_XDECREF( old );
    }

    branch_no_29:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 152;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_6;
    loop_end_6:;
    branch_no_24:;
    branch_no_17:;
    tmp_source_name_92 = par_self;

    if ( tmp_source_name_92 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 176;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_left_10 = LOOKUP_ATTRIBUTE( tmp_source_name_92, const_str_plain_row );
    if ( tmp_compare_left_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 176;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_10 = const_int_pos_7;
    tmp_cmp_Lt_2 = RICH_COMPARE_BOOL_LT( tmp_compare_left_10, tmp_compare_right_10 );
    Py_DECREF( tmp_compare_left_10 );
    if ( tmp_cmp_Lt_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 176;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Lt_2 == 1 )
    {
        goto branch_yes_30;
    }
    else
    {
        goto branch_no_30;
    }
    branch_yes_30:;
    tmp_source_name_93 = par_self;

    if ( tmp_source_name_93 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 178;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_75 = LOOKUP_ATTRIBUTE( tmp_source_name_93, const_str_plain_row );
    if ( tmp_assign_source_75 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 178;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_rowCount;
        var_rowCount = tmp_assign_source_75;
        Py_XDECREF( old );
    }

    tmp_source_name_94 = par_self;

    if ( tmp_source_name_94 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 179;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_76 = LOOKUP_ATTRIBUTE( tmp_source_name_94, const_str_plain_col );
    if ( tmp_assign_source_76 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 179;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_colCount;
        var_colCount = tmp_assign_source_76;
        Py_XDECREF( old );
    }

    tmp_assign_source_77 = Py_False;
    {
        PyObject *old = var_edgeFound;
        var_edgeFound = tmp_assign_source_77;
        Py_INCREF( var_edgeFound );
        Py_XDECREF( old );
    }

    tmp_assign_source_78 = Py_True;
    {
        PyObject *old = var_running;
        var_running = tmp_assign_source_78;
        Py_INCREF( var_running );
        Py_XDECREF( old );
    }

    tmp_assign_source_79 = Py_False;
    {
        PyObject *old = var_pieceFound;
        var_pieceFound = tmp_assign_source_79;
        Py_INCREF( var_pieceFound );
        Py_XDECREF( old );
    }

    tmp_source_name_95 = par_self;

    if ( tmp_source_name_95 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 185;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_left_11 = LOOKUP_ATTRIBUTE( tmp_source_name_95, const_str_plain_col );
    if ( tmp_compare_left_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 185;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_11 = const_int_0;
    tmp_cmp_Gt_3 = RICH_COMPARE_BOOL_GT( tmp_compare_left_11, tmp_compare_right_11 );
    Py_DECREF( tmp_compare_left_11 );
    if ( tmp_cmp_Gt_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 185;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Gt_3 == 1 )
    {
        goto branch_yes_31;
    }
    else
    {
        goto branch_no_31;
    }
    branch_yes_31:;
    loop_start_7:;
    tmp_left_name_23 = var_rowCount;

    if ( tmp_left_name_23 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "rowCount" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 186;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_23 = const_int_pos_1;
    tmp_compexpr_left_13 = BINARY_OPERATION_ADD( tmp_left_name_23, tmp_right_name_23 );
    if ( tmp_compexpr_left_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 186;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_13 = const_int_pos_8;
    tmp_or_left_value_5 = RICH_COMPARE_LT( tmp_compexpr_left_13, tmp_compexpr_right_13 );
    Py_DECREF( tmp_compexpr_left_13 );
    if ( tmp_or_left_value_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 186;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_or_left_truth_5 = CHECK_IF_TRUE( tmp_or_left_value_5 );
    if ( tmp_or_left_truth_5 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_or_left_value_5 );

        exception_lineno = 186;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_or_left_truth_5 == 1 )
    {
        goto or_left_5;
    }
    else
    {
        goto or_right_5;
    }
    or_right_5:;
    Py_DECREF( tmp_or_left_value_5 );
    tmp_left_name_24 = var_colCount;

    if ( tmp_left_name_24 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "colCount" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 186;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_24 = const_int_pos_1;
    tmp_compexpr_left_14 = BINARY_OPERATION_SUB( tmp_left_name_24, tmp_right_name_24 );
    if ( tmp_compexpr_left_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 186;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_14 = const_int_neg_1;
    tmp_or_right_value_5 = RICH_COMPARE_GT( tmp_compexpr_left_14, tmp_compexpr_right_14 );
    Py_DECREF( tmp_compexpr_left_14 );
    if ( tmp_or_right_value_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 186;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_value_9 = tmp_or_right_value_5;
    goto or_end_5;
    or_left_5:;
    tmp_and_left_value_9 = tmp_or_left_value_5;
    or_end_5:;
    tmp_and_left_truth_9 = CHECK_IF_TRUE( tmp_and_left_value_9 );
    if ( tmp_and_left_truth_9 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_9 );

        exception_lineno = 186;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_and_left_truth_9 == 1 )
    {
        goto and_right_9;
    }
    else
    {
        goto and_left_9;
    }
    and_right_9:;
    Py_DECREF( tmp_and_left_value_9 );
    tmp_and_left_value_10 = var_running;

    if ( tmp_and_left_value_10 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "running" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 186;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_and_left_truth_10 = CHECK_IF_TRUE( tmp_and_left_value_10 );
    if ( tmp_and_left_truth_10 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 186;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_and_left_truth_10 == 1 )
    {
        goto and_right_10;
    }
    else
    {
        goto and_left_10;
    }
    and_right_10:;
    tmp_operand_name_3 = var_edgeFound;

    if ( tmp_operand_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "edgeFound" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 186;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_and_right_value_10 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_3 );
    if ( tmp_and_right_value_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 186;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_right_value_9 = tmp_and_right_value_10;
    goto and_end_10;
    and_left_10:;
    tmp_and_right_value_9 = tmp_and_left_value_10;
    and_end_10:;
    Py_INCREF( tmp_and_right_value_9 );
    tmp_cond_value_21 = tmp_and_right_value_9;
    goto and_end_9;
    and_left_9:;
    tmp_cond_value_21 = tmp_and_left_value_9;
    and_end_9:;
    tmp_cond_truth_21 = CHECK_IF_TRUE( tmp_cond_value_21 );
    if ( tmp_cond_truth_21 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_21 );

        exception_lineno = 186;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_21 );
    if ( tmp_cond_truth_21 == 1 )
    {
        goto branch_no_32;
    }
    else
    {
        goto branch_yes_32;
    }
    branch_yes_32:;
    goto loop_end_7;
    branch_no_32:;
    tmp_left_name_25 = var_rowCount;

    if ( tmp_left_name_25 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "rowCount" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 187;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_25 = const_int_pos_1;
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_25, tmp_right_name_25 );
    tmp_assign_source_80 = tmp_left_name_25;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 187;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    var_rowCount = tmp_assign_source_80;

    tmp_left_name_26 = var_colCount;

    if ( tmp_left_name_26 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "colCount" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 188;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_26 = const_int_pos_1;
    tmp_result = BINARY_OPERATION_INPLACE( PyNumber_InPlaceSubtract, &tmp_left_name_26, tmp_right_name_26 );
    tmp_assign_source_81 = tmp_left_name_26;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 188;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    var_colCount = tmp_assign_source_81;

    tmp_compexpr_left_15 = var_colCount;

    CHECK_OBJECT( tmp_compexpr_left_15 );
    tmp_compexpr_right_15 = const_int_neg_1;
    tmp_or_left_value_6 = RICH_COMPARE_EQ( tmp_compexpr_left_15, tmp_compexpr_right_15 );
    if ( tmp_or_left_value_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 189;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_or_left_truth_6 = CHECK_IF_TRUE( tmp_or_left_value_6 );
    if ( tmp_or_left_truth_6 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_or_left_value_6 );

        exception_lineno = 189;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_or_left_truth_6 == 1 )
    {
        goto or_left_6;
    }
    else
    {
        goto or_right_6;
    }
    or_right_6:;
    Py_DECREF( tmp_or_left_value_6 );
    tmp_compexpr_left_16 = var_rowCount;

    if ( tmp_compexpr_left_16 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "rowCount" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 189;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_right_16 = const_int_pos_8;
    tmp_or_right_value_6 = RICH_COMPARE_EQ( tmp_compexpr_left_16, tmp_compexpr_right_16 );
    if ( tmp_or_right_value_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 189;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_value_22 = tmp_or_right_value_6;
    goto or_end_6;
    or_left_6:;
    tmp_cond_value_22 = tmp_or_left_value_6;
    or_end_6:;
    tmp_cond_truth_22 = CHECK_IF_TRUE( tmp_cond_value_22 );
    if ( tmp_cond_truth_22 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_22 );

        exception_lineno = 189;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_22 );
    if ( tmp_cond_truth_22 == 1 )
    {
        goto branch_yes_33;
    }
    else
    {
        goto branch_no_33;
    }
    branch_yes_33:;
    tmp_assign_source_82 = Py_True;
    {
        PyObject *old = var_edgeFound;
        var_edgeFound = tmp_assign_source_82;
        Py_INCREF( var_edgeFound );
        Py_XDECREF( old );
    }

    goto branch_end_33;
    branch_no_33:;
    tmp_source_name_98 = GET_STRING_DICT_VALUE( moduledict_pieces$queen, (Nuitka_StringObject *)const_str_plain_board );

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

        exception_lineno = 191;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_37 = LOOKUP_ATTRIBUTE( tmp_source_name_98, const_str_plain_Grid );
    if ( tmp_called_name_37 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 191;
        type_description_1 = "oooooooo";
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

        exception_lineno = 191;
        type_description_1 = "oooooooo";
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

        exception_lineno = 191;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    frame_fcb3ff43bf41755469ee19bade68239f->m_frame.f_lineno = 191;
    {
        PyObject *call_args[] = { tmp_args_element_name_67, tmp_args_element_name_68 };
        tmp_source_name_97 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_37, call_args );
    }

    Py_DECREF( tmp_called_name_37 );
    if ( tmp_source_name_97 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 191;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_96 = LOOKUP_ATTRIBUTE( tmp_source_name_97, const_str_plain_piece );
    Py_DECREF( tmp_source_name_97 );
    if ( tmp_source_name_96 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 191;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_left_12 = LOOKUP_ATTRIBUTE( tmp_source_name_96, const_str_plain_color );
    Py_DECREF( tmp_source_name_96 );
    if ( tmp_compare_left_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 191;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_99 = par_self;

    if ( tmp_source_name_99 == NULL )
    {
        Py_DECREF( tmp_compare_left_12 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 191;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_12 = LOOKUP_ATTRIBUTE( tmp_source_name_99, const_str_plain_color );
    if ( tmp_compare_right_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_12 );

        exception_lineno = 191;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cmp_NotEq_7 = RICH_COMPARE_BOOL_NE( tmp_compare_left_12, tmp_compare_right_12 );
    Py_DECREF( tmp_compare_left_12 );
    Py_DECREF( tmp_compare_right_12 );
    if ( tmp_cmp_NotEq_7 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 191;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_NotEq_7 == 1 )
    {
        goto branch_yes_34;
    }
    else
    {
        goto branch_no_34;
    }
    branch_yes_34:;
    tmp_assattr_name_13 = Py_True;
    tmp_source_name_100 = GET_STRING_DICT_VALUE( moduledict_pieces$queen, (Nuitka_StringObject *)const_str_plain_board );

    if (unlikely( tmp_source_name_100 == NULL ))
    {
        tmp_source_name_100 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_board );
    }

    if ( tmp_source_name_100 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "board" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 192;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_38 = LOOKUP_ATTRIBUTE( tmp_source_name_100, const_str_plain_Grid );
    if ( tmp_called_name_38 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 192;
        type_description_1 = "oooooooo";
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

        exception_lineno = 192;
        type_description_1 = "oooooooo";
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

        exception_lineno = 192;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    frame_fcb3ff43bf41755469ee19bade68239f->m_frame.f_lineno = 192;
    {
        PyObject *call_args[] = { tmp_args_element_name_69, tmp_args_element_name_70 };
        tmp_assattr_target_13 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_38, call_args );
    }

    Py_DECREF( tmp_called_name_38 );
    if ( tmp_assattr_target_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 192;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_13, const_str_plain_des, tmp_assattr_name_13 );
    Py_DECREF( tmp_assattr_target_13 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 192;
        type_description_1 = "oooooooo";
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

        exception_lineno = 193;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_101 = GET_STRING_DICT_VALUE( moduledict_pieces$queen, (Nuitka_StringObject *)const_str_plain_board );

    if (unlikely( tmp_source_name_101 == NULL ))
    {
        tmp_source_name_101 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_board );
    }

    if ( tmp_source_name_101 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "board" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 193;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_39 = LOOKUP_ATTRIBUTE( tmp_source_name_101, const_str_plain_Grid );
    if ( tmp_called_name_39 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 193;
        type_description_1 = "oooooooo";
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

        exception_lineno = 193;
        type_description_1 = "oooooooo";
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

        exception_lineno = 193;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    frame_fcb3ff43bf41755469ee19bade68239f->m_frame.f_lineno = 193;
    {
        PyObject *call_args[] = { tmp_args_element_name_71, tmp_args_element_name_72 };
        tmp_assattr_target_14 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_39, call_args );
    }

    Py_DECREF( tmp_called_name_39 );
    if ( tmp_assattr_target_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 193;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_14, const_str_plain_option, tmp_assattr_name_14 );
    Py_DECREF( tmp_assattr_target_14 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 193;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_27 = var_optionCounter;

    if ( tmp_left_name_27 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "optionCounter" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 194;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_27 = const_int_pos_1;
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_27, tmp_right_name_27 );
    tmp_assign_source_83 = tmp_left_name_27;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 194;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    var_optionCounter = tmp_assign_source_83;

    tmp_source_name_102 = var_availMoves;

    if ( tmp_source_name_102 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "availMoves" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 195;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_40 = LOOKUP_ATTRIBUTE( tmp_source_name_102, const_str_plain_append );
    if ( tmp_called_name_40 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 195;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_103 = GET_STRING_DICT_VALUE( moduledict_pieces$queen, (Nuitka_StringObject *)const_str_plain_board );

    if (unlikely( tmp_source_name_103 == NULL ))
    {
        tmp_source_name_103 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_board );
    }

    if ( tmp_source_name_103 == NULL )
    {
        Py_DECREF( tmp_called_name_40 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "board" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 195;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_41 = LOOKUP_ATTRIBUTE( tmp_source_name_103, const_str_plain_Grid );
    if ( tmp_called_name_41 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_40 );

        exception_lineno = 195;
        type_description_1 = "oooooooo";
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

        exception_lineno = 195;
        type_description_1 = "oooooooo";
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

        exception_lineno = 195;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    frame_fcb3ff43bf41755469ee19bade68239f->m_frame.f_lineno = 195;
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

        exception_lineno = 195;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    frame_fcb3ff43bf41755469ee19bade68239f->m_frame.f_lineno = 195;
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


        exception_lineno = 195;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_105 = GET_STRING_DICT_VALUE( moduledict_pieces$queen, (Nuitka_StringObject *)const_str_plain_board );

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

        exception_lineno = 196;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_42 = LOOKUP_ATTRIBUTE( tmp_source_name_105, const_str_plain_Grid );
    if ( tmp_called_name_42 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 196;
        type_description_1 = "oooooooo";
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

        exception_lineno = 196;
        type_description_1 = "oooooooo";
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

        exception_lineno = 196;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    frame_fcb3ff43bf41755469ee19bade68239f->m_frame.f_lineno = 196;
    {
        PyObject *call_args[] = { tmp_args_element_name_76, tmp_args_element_name_77 };
        tmp_source_name_104 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_42, call_args );
    }

    Py_DECREF( tmp_called_name_42 );
    if ( tmp_source_name_104 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 196;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_value_23 = LOOKUP_ATTRIBUTE( tmp_source_name_104, const_str_plain_pieceStatus );
    Py_DECREF( tmp_source_name_104 );
    if ( tmp_cond_value_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 196;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_23 = CHECK_IF_TRUE( tmp_cond_value_23 );
    if ( tmp_cond_truth_23 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_23 );

        exception_lineno = 196;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_23 );
    if ( tmp_cond_truth_23 == 1 )
    {
        goto branch_yes_35;
    }
    else
    {
        goto branch_no_35;
    }
    branch_yes_35:;
    tmp_assign_source_84 = Py_True;
    {
        PyObject *old = var_pieceFound;
        var_pieceFound = tmp_assign_source_84;
        Py_INCREF( var_pieceFound );
        Py_XDECREF( old );
    }

    branch_no_35:;
    goto branch_end_34;
    branch_no_34:;
    tmp_assign_source_85 = const_int_pos_7;
    {
        PyObject *old = var_rowCount;
        var_rowCount = tmp_assign_source_85;
        Py_INCREF( var_rowCount );
        Py_XDECREF( old );
    }

    tmp_assign_source_86 = const_int_0;
    {
        PyObject *old = var_colCount;
        var_colCount = tmp_assign_source_86;
        Py_INCREF( var_colCount );
        Py_XDECREF( old );
    }

    tmp_assign_source_87 = Py_False;
    {
        PyObject *old = var_running;
        var_running = tmp_assign_source_87;
        Py_INCREF( var_running );
        Py_XDECREF( old );
    }

    branch_end_34:;
    branch_end_33:;
    tmp_cond_value_24 = var_pieceFound;

    if ( tmp_cond_value_24 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "pieceFound" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 204;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_24 = CHECK_IF_TRUE( tmp_cond_value_24 );
    if ( tmp_cond_truth_24 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 204;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_24 == 1 )
    {
        goto branch_yes_36;
    }
    else
    {
        goto branch_no_36;
    }
    branch_yes_36:;
    tmp_assign_source_88 = const_int_pos_7;
    {
        PyObject *old = var_rowCount;
        var_rowCount = tmp_assign_source_88;
        Py_INCREF( var_rowCount );
        Py_XDECREF( old );
    }

    tmp_assign_source_89 = const_int_0;
    {
        PyObject *old = var_colCount;
        var_colCount = tmp_assign_source_89;
        Py_INCREF( var_colCount );
        Py_XDECREF( old );
    }

    tmp_assign_source_90 = Py_False;
    {
        PyObject *old = var_running;
        var_running = tmp_assign_source_90;
        Py_INCREF( var_running );
        Py_XDECREF( old );
    }

    branch_no_36:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 186;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_7;
    loop_end_7:;
    branch_no_31:;
    tmp_source_name_106 = par_self;

    if ( tmp_source_name_106 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 210;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_91 = LOOKUP_ATTRIBUTE( tmp_source_name_106, const_str_plain_row );
    if ( tmp_assign_source_91 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 210;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_rowCount;
        var_rowCount = tmp_assign_source_91;
        Py_XDECREF( old );
    }

    tmp_source_name_107 = par_self;

    if ( tmp_source_name_107 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 211;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_92 = LOOKUP_ATTRIBUTE( tmp_source_name_107, const_str_plain_col );
    if ( tmp_assign_source_92 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 211;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_colCount;
        var_colCount = tmp_assign_source_92;
        Py_XDECREF( old );
    }

    tmp_assign_source_93 = Py_False;
    {
        PyObject *old = var_edgeFound;
        var_edgeFound = tmp_assign_source_93;
        Py_INCREF( var_edgeFound );
        Py_XDECREF( old );
    }

    tmp_assign_source_94 = Py_True;
    {
        PyObject *old = var_running;
        var_running = tmp_assign_source_94;
        Py_INCREF( var_running );
        Py_XDECREF( old );
    }

    tmp_assign_source_95 = Py_False;
    {
        PyObject *old = var_pieceFound;
        var_pieceFound = tmp_assign_source_95;
        Py_INCREF( var_pieceFound );
        Py_XDECREF( old );
    }

    tmp_source_name_108 = par_self;

    if ( tmp_source_name_108 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 217;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_left_13 = LOOKUP_ATTRIBUTE( tmp_source_name_108, const_str_plain_col );
    if ( tmp_compare_left_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 217;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_13 = const_int_pos_7;
    tmp_cmp_Lt_3 = RICH_COMPARE_BOOL_LT( tmp_compare_left_13, tmp_compare_right_13 );
    Py_DECREF( tmp_compare_left_13 );
    if ( tmp_cmp_Lt_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 217;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Lt_3 == 1 )
    {
        goto branch_yes_37;
    }
    else
    {
        goto branch_no_37;
    }
    branch_yes_37:;
    loop_start_8:;
    tmp_left_name_28 = var_rowCount;

    if ( tmp_left_name_28 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "rowCount" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 218;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_28 = const_int_pos_1;
    tmp_compexpr_left_17 = BINARY_OPERATION_ADD( tmp_left_name_28, tmp_right_name_28 );
    if ( tmp_compexpr_left_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 218;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_17 = const_int_pos_8;
    tmp_or_left_value_7 = RICH_COMPARE_LT( tmp_compexpr_left_17, tmp_compexpr_right_17 );
    Py_DECREF( tmp_compexpr_left_17 );
    if ( tmp_or_left_value_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 218;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_or_left_truth_7 = CHECK_IF_TRUE( tmp_or_left_value_7 );
    if ( tmp_or_left_truth_7 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_or_left_value_7 );

        exception_lineno = 218;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_or_left_truth_7 == 1 )
    {
        goto or_left_7;
    }
    else
    {
        goto or_right_7;
    }
    or_right_7:;
    Py_DECREF( tmp_or_left_value_7 );
    tmp_left_name_29 = var_colCount;

    if ( tmp_left_name_29 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "colCount" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 218;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_29 = const_int_pos_1;
    tmp_compexpr_left_18 = BINARY_OPERATION_ADD( tmp_left_name_29, tmp_right_name_29 );
    if ( tmp_compexpr_left_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 218;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_18 = const_int_pos_8;
    tmp_or_right_value_7 = RICH_COMPARE_LT( tmp_compexpr_left_18, tmp_compexpr_right_18 );
    Py_DECREF( tmp_compexpr_left_18 );
    if ( tmp_or_right_value_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 218;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_value_11 = tmp_or_right_value_7;
    goto or_end_7;
    or_left_7:;
    tmp_and_left_value_11 = tmp_or_left_value_7;
    or_end_7:;
    tmp_and_left_truth_11 = CHECK_IF_TRUE( tmp_and_left_value_11 );
    if ( tmp_and_left_truth_11 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_11 );

        exception_lineno = 218;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_and_left_truth_11 == 1 )
    {
        goto and_right_11;
    }
    else
    {
        goto and_left_11;
    }
    and_right_11:;
    Py_DECREF( tmp_and_left_value_11 );
    tmp_and_left_value_12 = var_running;

    if ( tmp_and_left_value_12 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "running" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 218;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_and_left_truth_12 = CHECK_IF_TRUE( tmp_and_left_value_12 );
    if ( tmp_and_left_truth_12 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 218;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_and_left_truth_12 == 1 )
    {
        goto and_right_12;
    }
    else
    {
        goto and_left_12;
    }
    and_right_12:;
    tmp_operand_name_4 = var_edgeFound;

    if ( tmp_operand_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "edgeFound" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 218;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_and_right_value_12 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_4 );
    if ( tmp_and_right_value_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 218;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_right_value_11 = tmp_and_right_value_12;
    goto and_end_12;
    and_left_12:;
    tmp_and_right_value_11 = tmp_and_left_value_12;
    and_end_12:;
    Py_INCREF( tmp_and_right_value_11 );
    tmp_cond_value_25 = tmp_and_right_value_11;
    goto and_end_11;
    and_left_11:;
    tmp_cond_value_25 = tmp_and_left_value_11;
    and_end_11:;
    tmp_cond_truth_25 = CHECK_IF_TRUE( tmp_cond_value_25 );
    if ( tmp_cond_truth_25 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_25 );

        exception_lineno = 218;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_25 );
    if ( tmp_cond_truth_25 == 1 )
    {
        goto branch_no_38;
    }
    else
    {
        goto branch_yes_38;
    }
    branch_yes_38:;
    goto loop_end_8;
    branch_no_38:;
    tmp_left_name_30 = var_rowCount;

    if ( tmp_left_name_30 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "rowCount" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 219;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_30 = const_int_pos_1;
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_30, tmp_right_name_30 );
    tmp_assign_source_96 = tmp_left_name_30;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 219;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    var_rowCount = tmp_assign_source_96;

    tmp_left_name_31 = var_colCount;

    if ( tmp_left_name_31 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "colCount" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 220;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_31 = const_int_pos_1;
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_31, tmp_right_name_31 );
    tmp_assign_source_97 = tmp_left_name_31;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 220;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    var_colCount = tmp_assign_source_97;

    tmp_compexpr_left_19 = var_colCount;

    CHECK_OBJECT( tmp_compexpr_left_19 );
    tmp_compexpr_right_19 = const_int_pos_8;
    tmp_or_left_value_8 = RICH_COMPARE_EQ( tmp_compexpr_left_19, tmp_compexpr_right_19 );
    if ( tmp_or_left_value_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 221;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_or_left_truth_8 = CHECK_IF_TRUE( tmp_or_left_value_8 );
    if ( tmp_or_left_truth_8 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_or_left_value_8 );

        exception_lineno = 221;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_or_left_truth_8 == 1 )
    {
        goto or_left_8;
    }
    else
    {
        goto or_right_8;
    }
    or_right_8:;
    Py_DECREF( tmp_or_left_value_8 );
    tmp_compexpr_left_20 = var_rowCount;

    if ( tmp_compexpr_left_20 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "rowCount" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 221;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_right_20 = const_int_pos_8;
    tmp_or_right_value_8 = RICH_COMPARE_EQ( tmp_compexpr_left_20, tmp_compexpr_right_20 );
    if ( tmp_or_right_value_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 221;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_value_26 = tmp_or_right_value_8;
    goto or_end_8;
    or_left_8:;
    tmp_cond_value_26 = tmp_or_left_value_8;
    or_end_8:;
    tmp_cond_truth_26 = CHECK_IF_TRUE( tmp_cond_value_26 );
    if ( tmp_cond_truth_26 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_26 );

        exception_lineno = 221;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_26 );
    if ( tmp_cond_truth_26 == 1 )
    {
        goto branch_yes_39;
    }
    else
    {
        goto branch_no_39;
    }
    branch_yes_39:;
    tmp_assign_source_98 = Py_True;
    {
        PyObject *old = var_edgeFound;
        var_edgeFound = tmp_assign_source_98;
        Py_INCREF( var_edgeFound );
        Py_XDECREF( old );
    }

    goto branch_end_39;
    branch_no_39:;
    tmp_source_name_111 = GET_STRING_DICT_VALUE( moduledict_pieces$queen, (Nuitka_StringObject *)const_str_plain_board );

    if (unlikely( tmp_source_name_111 == NULL ))
    {
        tmp_source_name_111 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_board );
    }

    if ( tmp_source_name_111 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "board" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 223;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_43 = LOOKUP_ATTRIBUTE( tmp_source_name_111, const_str_plain_Grid );
    if ( tmp_called_name_43 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 223;
        type_description_1 = "oooooooo";
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

        exception_lineno = 223;
        type_description_1 = "oooooooo";
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

        exception_lineno = 223;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    frame_fcb3ff43bf41755469ee19bade68239f->m_frame.f_lineno = 223;
    {
        PyObject *call_args[] = { tmp_args_element_name_78, tmp_args_element_name_79 };
        tmp_source_name_110 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_43, call_args );
    }

    Py_DECREF( tmp_called_name_43 );
    if ( tmp_source_name_110 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 223;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_109 = LOOKUP_ATTRIBUTE( tmp_source_name_110, const_str_plain_piece );
    Py_DECREF( tmp_source_name_110 );
    if ( tmp_source_name_109 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 223;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_left_14 = LOOKUP_ATTRIBUTE( tmp_source_name_109, const_str_plain_color );
    Py_DECREF( tmp_source_name_109 );
    if ( tmp_compare_left_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 223;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_112 = par_self;

    if ( tmp_source_name_112 == NULL )
    {
        Py_DECREF( tmp_compare_left_14 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 223;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_14 = LOOKUP_ATTRIBUTE( tmp_source_name_112, const_str_plain_color );
    if ( tmp_compare_right_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_14 );

        exception_lineno = 223;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cmp_NotEq_8 = RICH_COMPARE_BOOL_NE( tmp_compare_left_14, tmp_compare_right_14 );
    Py_DECREF( tmp_compare_left_14 );
    Py_DECREF( tmp_compare_right_14 );
    if ( tmp_cmp_NotEq_8 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 223;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_NotEq_8 == 1 )
    {
        goto branch_yes_40;
    }
    else
    {
        goto branch_no_40;
    }
    branch_yes_40:;
    tmp_assattr_name_15 = Py_True;
    tmp_source_name_113 = GET_STRING_DICT_VALUE( moduledict_pieces$queen, (Nuitka_StringObject *)const_str_plain_board );

    if (unlikely( tmp_source_name_113 == NULL ))
    {
        tmp_source_name_113 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_board );
    }

    if ( tmp_source_name_113 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "board" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 224;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_44 = LOOKUP_ATTRIBUTE( tmp_source_name_113, const_str_plain_Grid );
    if ( tmp_called_name_44 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 224;
        type_description_1 = "oooooooo";
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

        exception_lineno = 224;
        type_description_1 = "oooooooo";
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

        exception_lineno = 224;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    frame_fcb3ff43bf41755469ee19bade68239f->m_frame.f_lineno = 224;
    {
        PyObject *call_args[] = { tmp_args_element_name_80, tmp_args_element_name_81 };
        tmp_assattr_target_15 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_44, call_args );
    }

    Py_DECREF( tmp_called_name_44 );
    if ( tmp_assattr_target_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 224;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_15, const_str_plain_des, tmp_assattr_name_15 );
    Py_DECREF( tmp_assattr_target_15 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 224;
        type_description_1 = "oooooooo";
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

        exception_lineno = 225;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_114 = GET_STRING_DICT_VALUE( moduledict_pieces$queen, (Nuitka_StringObject *)const_str_plain_board );

    if (unlikely( tmp_source_name_114 == NULL ))
    {
        tmp_source_name_114 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_board );
    }

    if ( tmp_source_name_114 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "board" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 225;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_45 = LOOKUP_ATTRIBUTE( tmp_source_name_114, const_str_plain_Grid );
    if ( tmp_called_name_45 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 225;
        type_description_1 = "oooooooo";
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

        exception_lineno = 225;
        type_description_1 = "oooooooo";
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

        exception_lineno = 225;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    frame_fcb3ff43bf41755469ee19bade68239f->m_frame.f_lineno = 225;
    {
        PyObject *call_args[] = { tmp_args_element_name_82, tmp_args_element_name_83 };
        tmp_assattr_target_16 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_45, call_args );
    }

    Py_DECREF( tmp_called_name_45 );
    if ( tmp_assattr_target_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 225;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_16, const_str_plain_option, tmp_assattr_name_16 );
    Py_DECREF( tmp_assattr_target_16 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 225;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_32 = var_optionCounter;

    if ( tmp_left_name_32 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "optionCounter" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 226;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_32 = const_int_pos_1;
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_32, tmp_right_name_32 );
    tmp_assign_source_99 = tmp_left_name_32;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 226;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    var_optionCounter = tmp_assign_source_99;

    tmp_source_name_115 = var_availMoves;

    if ( tmp_source_name_115 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "availMoves" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 227;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_46 = LOOKUP_ATTRIBUTE( tmp_source_name_115, const_str_plain_append );
    if ( tmp_called_name_46 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 227;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_116 = GET_STRING_DICT_VALUE( moduledict_pieces$queen, (Nuitka_StringObject *)const_str_plain_board );

    if (unlikely( tmp_source_name_116 == NULL ))
    {
        tmp_source_name_116 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_board );
    }

    if ( tmp_source_name_116 == NULL )
    {
        Py_DECREF( tmp_called_name_46 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "board" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 227;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_47 = LOOKUP_ATTRIBUTE( tmp_source_name_116, const_str_plain_Grid );
    if ( tmp_called_name_47 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_46 );

        exception_lineno = 227;
        type_description_1 = "oooooooo";
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

        exception_lineno = 227;
        type_description_1 = "oooooooo";
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

        exception_lineno = 227;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    frame_fcb3ff43bf41755469ee19bade68239f->m_frame.f_lineno = 227;
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

        exception_lineno = 227;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    frame_fcb3ff43bf41755469ee19bade68239f->m_frame.f_lineno = 227;
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


        exception_lineno = 227;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_118 = GET_STRING_DICT_VALUE( moduledict_pieces$queen, (Nuitka_StringObject *)const_str_plain_board );

    if (unlikely( tmp_source_name_118 == NULL ))
    {
        tmp_source_name_118 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_board );
    }

    if ( tmp_source_name_118 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "board" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 228;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_48 = LOOKUP_ATTRIBUTE( tmp_source_name_118, const_str_plain_Grid );
    if ( tmp_called_name_48 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 228;
        type_description_1 = "oooooooo";
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

        exception_lineno = 228;
        type_description_1 = "oooooooo";
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

        exception_lineno = 228;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    frame_fcb3ff43bf41755469ee19bade68239f->m_frame.f_lineno = 228;
    {
        PyObject *call_args[] = { tmp_args_element_name_87, tmp_args_element_name_88 };
        tmp_source_name_117 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_48, call_args );
    }

    Py_DECREF( tmp_called_name_48 );
    if ( tmp_source_name_117 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 228;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_value_27 = LOOKUP_ATTRIBUTE( tmp_source_name_117, const_str_plain_pieceStatus );
    Py_DECREF( tmp_source_name_117 );
    if ( tmp_cond_value_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 228;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_27 = CHECK_IF_TRUE( tmp_cond_value_27 );
    if ( tmp_cond_truth_27 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_27 );

        exception_lineno = 228;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_27 );
    if ( tmp_cond_truth_27 == 1 )
    {
        goto branch_yes_41;
    }
    else
    {
        goto branch_no_41;
    }
    branch_yes_41:;
    tmp_assign_source_100 = Py_True;
    {
        PyObject *old = var_pieceFound;
        var_pieceFound = tmp_assign_source_100;
        Py_INCREF( var_pieceFound );
        Py_XDECREF( old );
    }

    branch_no_41:;
    goto branch_end_40;
    branch_no_40:;
    tmp_assign_source_101 = const_int_pos_7;
    {
        PyObject *old = var_rowCount;
        var_rowCount = tmp_assign_source_101;
        Py_INCREF( var_rowCount );
        Py_XDECREF( old );
    }

    tmp_assign_source_102 = const_int_pos_7;
    {
        PyObject *old = var_colCount;
        var_colCount = tmp_assign_source_102;
        Py_INCREF( var_colCount );
        Py_XDECREF( old );
    }

    tmp_assign_source_103 = Py_False;
    {
        PyObject *old = var_running;
        var_running = tmp_assign_source_103;
        Py_INCREF( var_running );
        Py_XDECREF( old );
    }

    branch_end_40:;
    branch_end_39:;
    tmp_cond_value_28 = var_pieceFound;

    if ( tmp_cond_value_28 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "pieceFound" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 236;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_28 = CHECK_IF_TRUE( tmp_cond_value_28 );
    if ( tmp_cond_truth_28 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 236;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_28 == 1 )
    {
        goto branch_yes_42;
    }
    else
    {
        goto branch_no_42;
    }
    branch_yes_42:;
    tmp_assign_source_104 = const_int_pos_7;
    {
        PyObject *old = var_rowCount;
        var_rowCount = tmp_assign_source_104;
        Py_INCREF( var_rowCount );
        Py_XDECREF( old );
    }

    tmp_assign_source_105 = const_int_pos_7;
    {
        PyObject *old = var_colCount;
        var_colCount = tmp_assign_source_105;
        Py_INCREF( var_colCount );
        Py_XDECREF( old );
    }

    tmp_assign_source_106 = Py_False;
    {
        PyObject *old = var_running;
        var_running = tmp_assign_source_106;
        Py_INCREF( var_running );
        Py_XDECREF( old );
    }

    branch_no_42:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 218;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_8;
    loop_end_8:;
    branch_no_37:;
    branch_no_30:;
    tmp_return_value = var_availMoves;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "availMoves" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 241;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fcb3ff43bf41755469ee19bade68239f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_fcb3ff43bf41755469ee19bade68239f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fcb3ff43bf41755469ee19bade68239f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_fcb3ff43bf41755469ee19bade68239f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_fcb3ff43bf41755469ee19bade68239f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_fcb3ff43bf41755469ee19bade68239f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_fcb3ff43bf41755469ee19bade68239f,
        type_description_1,
        par_self,
        var_availMoves,
        var_optionCounter,
        var_pieceFound,
        var_running,
        var_rowCount,
        var_colCount,
        var_edgeFound
    );


    // Release cached frame.
    if ( frame_fcb3ff43bf41755469ee19bade68239f == cache_frame_fcb3ff43bf41755469ee19bade68239f )
    {
        Py_DECREF( frame_fcb3ff43bf41755469ee19bade68239f );
    }
    cache_frame_fcb3ff43bf41755469ee19bade68239f = NULL;

    assertFrameObject( frame_fcb3ff43bf41755469ee19bade68239f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pieces$queen$$$function_3_scan );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_availMoves );
    var_availMoves = NULL;

    Py_XDECREF( var_optionCounter );
    var_optionCounter = NULL;

    Py_XDECREF( var_pieceFound );
    var_pieceFound = NULL;

    Py_XDECREF( var_running );
    var_running = NULL;

    Py_XDECREF( var_rowCount );
    var_rowCount = NULL;

    Py_XDECREF( var_colCount );
    var_colCount = NULL;

    Py_XDECREF( var_edgeFound );
    var_edgeFound = NULL;

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

    Py_XDECREF( var_pieceFound );
    var_pieceFound = NULL;

    Py_XDECREF( var_running );
    var_running = NULL;

    Py_XDECREF( var_rowCount );
    var_rowCount = NULL;

    Py_XDECREF( var_colCount );
    var_colCount = NULL;

    Py_XDECREF( var_edgeFound );
    var_edgeFound = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pieces$queen$$$function_3_scan );
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



static PyObject *MAKE_FUNCTION_pieces$queen$$$function_1___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pieces$queen$$$function_1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_80416b08f65ced7fcdbb56a4e91ed3e1,
#endif
        codeobj_27ae9d07e9f9300125ea25ca4016d604,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pieces$queen,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pieces$queen$$$function_2___str__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pieces$queen$$$function_2___str__,
        const_str_plain___str__,
#if PYTHON_VERSION >= 300
        const_str_digest_ad64f91717be2b568f9e4c28e0d854d0,
#endif
        codeobj_98f844dc251d1a8bd396c4ecae587067,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pieces$queen,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pieces$queen$$$function_3_scan(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pieces$queen$$$function_3_scan,
        const_str_plain_scan,
#if PYTHON_VERSION >= 300
        const_str_digest_c33eb8db84bca2bbedbc7432d4ad092d,
#endif
        codeobj_fcb3ff43bf41755469ee19bade68239f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pieces$queen,
        Py_None,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_pieces$queen =
{
    PyModuleDef_HEAD_INIT,
    "pieces.queen",   /* m_name */
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

MOD_INIT_DECL( pieces$queen )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_pieces$queen );
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
    puts("pieces.queen: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("pieces.queen: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("pieces.queen: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initpieces$queen" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_pieces$queen = Py_InitModule4(
        "pieces.queen",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_pieces$queen = PyModule_Create( &mdef_pieces$queen );
#endif

    moduledict_pieces$queen = MODULE_DICT( module_pieces$queen );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_pieces$queen, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_pieces$queen,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );

#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_pieces$queen, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_pieces$queen,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_pieces$queen, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_pieces$queen,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_pieces$queen );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_26e65b6029d22a2a1f8928e05680d921, module_pieces$queen );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_pieces$queen, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_pieces$queen, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_pieces$queen, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

#if PYTHON_VERSION >= 340
#if 0
    UPDATE_STRING_DICT0( moduledict_pieces$queen, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_pieces$queen, (Nuitka_StringObject *)const_str_plain___name__ ),
            metapath_based_loader
        };

        PyObject *spec_value = CALL_FUNCTION_WITH_ARGS2(
            module_spec_class,
            args
        );

        UPDATE_STRING_DICT1( moduledict_pieces$queen, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );

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
    static struct Nuitka_FrameObject *cache_frame_3e5aa5534e240487374ec31df550defc_2 = NULL;

    struct Nuitka_FrameObject *frame_3e5aa5534e240487374ec31df550defc_2;

    struct Nuitka_FrameObject *frame_c542445521638ab72da677829b0bc707;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    tmp_outline_return_value_1 = NULL;
    PyObject *locals_pieces$queen_4 = NULL;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_pieces$queen, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_8d27fff32be928ff4d687babe863fd50;
    UPDATE_STRING_DICT0( moduledict_pieces$queen, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_pieces$queen, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    // Frame without reuse.
    frame_c542445521638ab72da677829b0bc707 = MAKE_MODULE_FRAME( codeobj_c542445521638ab72da677829b0bc707, module_pieces$queen );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_c542445521638ab72da677829b0bc707 );
    assert( Py_REFCNT( frame_c542445521638ab72da677829b0bc707 ) == 2 );

    // Framed code:
    tmp_name_name_1 = const_str_plain_pieces;
    tmp_globals_name_1 = (PyObject *)moduledict_pieces$queen;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain_Piece_tuple;
    tmp_level_name_1 = const_int_0;
    frame_c542445521638ab72da677829b0bc707->m_frame.f_lineno = 1;
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
    UPDATE_STRING_DICT1( moduledict_pieces$queen, (Nuitka_StringObject *)const_str_plain_Piece, tmp_assign_source_4 );
    tmp_name_name_2 = const_str_plain_board;
    tmp_globals_name_2 = (PyObject *)moduledict_pieces$queen;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = Py_None;
    tmp_level_name_2 = const_int_0;
    frame_c542445521638ab72da677829b0bc707->m_frame.f_lineno = 2;
    tmp_assign_source_5 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pieces$queen, (Nuitka_StringObject *)const_str_plain_board, tmp_assign_source_5 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_pieces$queen, (Nuitka_StringObject *)const_str_plain_Piece );

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
    tmp_tuple_element_2 = const_str_plain_Queen;
    tmp_args_name_1 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_tuple_element_2 );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_2 );
    tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_1 );
    frame_c542445521638ab72da677829b0bc707->m_frame.f_lineno = 4;
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
    locals_pieces$queen_4 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_26e65b6029d22a2a1f8928e05680d921;
    tmp_res = PyObject_SetItem( locals_pieces$queen_4, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;

        goto try_except_handler_3;
    }
    tmp_dictset_value = const_str_plain_Queen;
    tmp_res = PyObject_SetItem( locals_pieces$queen_4, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;

        goto try_except_handler_3;
    }
    MAKE_OR_REUSE_FRAME( cache_frame_3e5aa5534e240487374ec31df550defc_2, codeobj_3e5aa5534e240487374ec31df550defc, module_pieces$queen, sizeof(void *) );
    frame_3e5aa5534e240487374ec31df550defc_2 = cache_frame_3e5aa5534e240487374ec31df550defc_2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_3e5aa5534e240487374ec31df550defc_2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_3e5aa5534e240487374ec31df550defc_2 ) == 2 ); // Frame stack

    // Framed code:
    tmp_dictset_value = MAKE_FUNCTION_pieces$queen$$$function_1___init__(  );
    tmp_res = PyObject_SetItem( locals_pieces$queen_4, const_str_plain___init__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_dictset_value = MAKE_FUNCTION_pieces$queen$$$function_2___str__(  );
    tmp_res = PyObject_SetItem( locals_pieces$queen_4, const_str_plain___str__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_dictset_value = MAKE_FUNCTION_pieces$queen$$$function_3_scan(  );
    tmp_res = PyObject_SetItem( locals_pieces$queen_4, const_str_plain_scan, tmp_dictset_value );
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
    RESTORE_FRAME_EXCEPTION( frame_3e5aa5534e240487374ec31df550defc_2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3e5aa5534e240487374ec31df550defc_2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_3e5aa5534e240487374ec31df550defc_2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_3e5aa5534e240487374ec31df550defc_2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_3e5aa5534e240487374ec31df550defc_2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_3e5aa5534e240487374ec31df550defc_2,
        type_description_2,
        NULL
    );


    // Release cached frame.
    if ( frame_3e5aa5534e240487374ec31df550defc_2 == cache_frame_3e5aa5534e240487374ec31df550defc_2 )
    {
        Py_DECREF( frame_3e5aa5534e240487374ec31df550defc_2 );
    }
    cache_frame_3e5aa5534e240487374ec31df550defc_2 = NULL;

    assertFrameObject( frame_3e5aa5534e240487374ec31df550defc_2 );

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
    tmp_res = PyObject_SetItem( locals_pieces$queen_4, const_str_plain___orig_bases__, tmp_dictset_value );
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
    tmp_tuple_element_3 = const_str_plain_Queen;
    tmp_args_name_2 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_3 );
    tmp_tuple_element_3 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_tuple_element_3 );
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_3 );
    tmp_tuple_element_3 = locals_pieces$queen_4;
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_3 );
    tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_2 );
    frame_c542445521638ab72da677829b0bc707->m_frame.f_lineno = 4;
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
    NUITKA_CANNOT_GET_HERE( pieces$queen );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_3:;
    Py_DECREF( locals_pieces$queen_4 );
    locals_pieces$queen_4 = NULL;
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

    Py_DECREF( locals_pieces$queen_4 );
    locals_pieces$queen_4 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pieces$queen );
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
    NUITKA_CANNOT_GET_HERE( pieces$queen );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_1:;
    exception_lineno = 4;
    goto try_except_handler_1;
    outline_result_1:;
    tmp_assign_source_11 = tmp_outline_return_value_1;
    UPDATE_STRING_DICT1( moduledict_pieces$queen, (Nuitka_StringObject *)const_str_plain_Queen, tmp_assign_source_11 );
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
    RESTORE_FRAME_EXCEPTION( frame_c542445521638ab72da677829b0bc707 );
#endif
    popFrameStack();

    assertFrameObject( frame_c542445521638ab72da677829b0bc707 );

    goto frame_no_exception_2;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_c542445521638ab72da677829b0bc707 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c542445521638ab72da677829b0bc707, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c542445521638ab72da677829b0bc707->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c542445521638ab72da677829b0bc707, exception_lineno );
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


    return MOD_RETURN_VALUE( module_pieces$queen );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
