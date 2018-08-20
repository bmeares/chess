/* Generated code for Python source for module 'pieces.pawn'
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

/* The _module_pieces$pawn is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_pieces$pawn;
PyDictObject *moduledict_pieces$pawn;

/* The module constants used, if any. */
extern PyObject *const_str_plain___orig_bases__;
extern PyObject *const_str_plain_optionCounter;
extern PyObject *const_str_plain_b;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_metaclass;
extern PyObject *const_str_plain___str__;
static PyObject *const_str_plain_blocked;
static PyObject *const_str_digest_cec81cd20676f472f27a68d9145e326b;
extern PyObject *const_str_plain_piece;
extern PyObject *const_tuple_str_plain___class___tuple;
extern PyObject *const_str_plain___qualname__;
extern PyObject *const_int_pos_1;
static PyObject *const_tuple_db59d60790202b6d071585d05a9fd1a5_tuple;
extern PyObject *const_str_plain_none;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_Pawn;
static PyObject *const_str_digest_4aba8469c4a8472912544f6e5f2011b3;
extern PyObject *const_str_plain_col;
extern PyObject *const_str_plain_W;
extern PyObject *const_str_plain_availMoves;
extern PyObject *const_tuple_str_plain_Piece_tuple;
extern PyObject *const_int_0;
static PyObject *const_str_digest_498dec75b4b640922d21ded5befa1a87;
static PyObject *const_str_plain_p;
static PyObject *const_str_digest_a307e03fca7b5252a158fc901bf452e9;
extern PyObject *const_tuple_str_plain_self_tuple;
extern PyObject *const_str_plain___init__;
extern PyObject *const_str_plain___prepare__;
extern PyObject *const_str_plain_row;
extern PyObject *const_str_plain_option;
extern PyObject *const_int_neg_1;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_plain_firstMove;
extern PyObject *const_int_pos_6;
extern PyObject *const_int_pos_7;
static PyObject *const_str_digest_ab1e52224da02ba66331ba8008208e6f;
static PyObject *const_str_plain_diagColor;
extern PyObject *const_str_plain_Piece;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_Grid;
extern PyObject *const_str_plain_pieces;
extern PyObject *const_str_plain_des;
static PyObject *const_str_plain_dn;
extern PyObject *const_str_plain_board;
extern PyObject *const_str_plain_pieceStatus;
extern PyObject *const_int_pos_2;
extern PyObject *const_str_plain_append;
static PyObject *const_str_plain_doubleBlocked;
extern PyObject *const_str_plain_scan;
extern PyObject *const_str_plain_type;
extern PyObject *const_str_empty;
extern PyObject *const_tuple_str_plain_self_str_plain_color_str_plain_type_tuple;
static PyObject *const_str_plain_P;
extern PyObject *const_str_plain_color;
static PyObject *const_str_digest_c6ec63f114a9e2a57091ef5b9454f850;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain___class__;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_plain_blocked = UNSTREAM_STRING( &constant_bin[ 2413 ], 7, 1 );
    const_str_digest_cec81cd20676f472f27a68d9145e326b = UNSTREAM_STRING( &constant_bin[ 2420 ], 13, 0 );
    const_tuple_db59d60790202b6d071585d05a9fd1a5_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_db59d60790202b6d071585d05a9fd1a5_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    const_str_plain_dn = UNSTREAM_STRING( &constant_bin[ 2433 ], 2, 1 );
    PyTuple_SET_ITEM( const_tuple_db59d60790202b6d071585d05a9fd1a5_tuple, 1, const_str_plain_dn ); Py_INCREF( const_str_plain_dn );
    PyTuple_SET_ITEM( const_tuple_db59d60790202b6d071585d05a9fd1a5_tuple, 2, const_str_plain_availMoves ); Py_INCREF( const_str_plain_availMoves );
    PyTuple_SET_ITEM( const_tuple_db59d60790202b6d071585d05a9fd1a5_tuple, 3, const_str_plain_optionCounter ); Py_INCREF( const_str_plain_optionCounter );
    PyTuple_SET_ITEM( const_tuple_db59d60790202b6d071585d05a9fd1a5_tuple, 4, const_str_plain_blocked ); Py_INCREF( const_str_plain_blocked );
    const_str_plain_doubleBlocked = UNSTREAM_STRING( &constant_bin[ 2435 ], 13, 1 );
    PyTuple_SET_ITEM( const_tuple_db59d60790202b6d071585d05a9fd1a5_tuple, 5, const_str_plain_doubleBlocked ); Py_INCREF( const_str_plain_doubleBlocked );
    const_str_plain_diagColor = UNSTREAM_STRING( &constant_bin[ 2448 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_db59d60790202b6d071585d05a9fd1a5_tuple, 6, const_str_plain_diagColor ); Py_INCREF( const_str_plain_diagColor );
    const_str_digest_4aba8469c4a8472912544f6e5f2011b3 = UNSTREAM_STRING( &constant_bin[ 2457 ], 12, 0 );
    const_str_digest_498dec75b4b640922d21ded5befa1a87 = UNSTREAM_STRING( &constant_bin[ 2469 ], 20, 0 );
    const_str_plain_p = UNSTREAM_STRING( &constant_bin[ 80 ], 1, 1 );
    const_str_digest_a307e03fca7b5252a158fc901bf452e9 = UNSTREAM_STRING( &constant_bin[ 2477 ], 11, 0 );
    const_str_digest_ab1e52224da02ba66331ba8008208e6f = UNSTREAM_STRING( &constant_bin[ 2489 ], 9, 0 );
    const_str_plain_P = UNSTREAM_STRING( &constant_bin[ 36 ], 1, 1 );
    const_str_digest_c6ec63f114a9e2a57091ef5b9454f850 = UNSTREAM_STRING( &constant_bin[ 2498 ], 60, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_pieces$pawn( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_182f4aa45d9b70182049fb0f520cca80;
static PyCodeObject *codeobj_7c4c1c0f778d5e3d5f7f17bc267efd4c;
static PyCodeObject *codeobj_4b9db31cc27c8706880452a2c506c4bd;
static PyCodeObject *codeobj_d9119caca42cfb6399f0c53fb0ee182a;
static PyCodeObject *codeobj_6a2e2c30dfe3a1ee8eedfeebe254752a;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_c6ec63f114a9e2a57091ef5b9454f850;
    codeobj_182f4aa45d9b70182049fb0f520cca80 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_498dec75b4b640922d21ded5befa1a87, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_7c4c1c0f778d5e3d5f7f17bc267efd4c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_Pawn, 4, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_4b9db31cc27c8706880452a2c506c4bd = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 5, const_tuple_str_plain_self_str_plain_color_str_plain_type_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_d9119caca42cfb6399f0c53fb0ee182a = MAKE_CODEOBJ( module_filename_obj, const_str_plain___str__, 9, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_6a2e2c30dfe3a1ee8eedfeebe254752a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_scan, 17, const_tuple_db59d60790202b6d071585d05a9fd1a5_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_1__mro_entries_conversion( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_pieces$pawn$$$function_1___init__(  );


static PyObject *MAKE_FUNCTION_pieces$pawn$$$function_2___str__(  );


static PyObject *MAKE_FUNCTION_pieces$pawn$$$function_3_scan(  );


// The module function definitions.
static PyObject *impl_pieces$pawn$$$function_1___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_called_name_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_4b9db31cc27c8706880452a2c506c4bd = NULL;

    struct Nuitka_FrameObject *frame_4b9db31cc27c8706880452a2c506c4bd;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4b9db31cc27c8706880452a2c506c4bd, codeobj_4b9db31cc27c8706880452a2c506c4bd, module_pieces$pawn, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_4b9db31cc27c8706880452a2c506c4bd = cache_frame_4b9db31cc27c8706880452a2c506c4bd;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4b9db31cc27c8706880452a2c506c4bd );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4b9db31cc27c8706880452a2c506c4bd ) == 2 ); // Frame stack

    // Framed code:
    tmp_assattr_name_1 = Py_True;
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_firstMove, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_pieces$pawn, (Nuitka_StringObject *)const_str_plain_Piece );

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

        exception_lineno = 7;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___init__ );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;
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

        exception_lineno = 7;
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

        exception_lineno = 7;
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

        exception_lineno = 7;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    frame_4b9db31cc27c8706880452a2c506c4bd->m_frame.f_lineno = 7;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4b9db31cc27c8706880452a2c506c4bd );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4b9db31cc27c8706880452a2c506c4bd );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4b9db31cc27c8706880452a2c506c4bd, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4b9db31cc27c8706880452a2c506c4bd->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4b9db31cc27c8706880452a2c506c4bd, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4b9db31cc27c8706880452a2c506c4bd,
        type_description_1,
        par_self,
        par_color,
        par_type
    );


    // Release cached frame.
    if ( frame_4b9db31cc27c8706880452a2c506c4bd == cache_frame_4b9db31cc27c8706880452a2c506c4bd )
    {
        Py_DECREF( frame_4b9db31cc27c8706880452a2c506c4bd );
    }
    cache_frame_4b9db31cc27c8706880452a2c506c4bd = NULL;

    assertFrameObject( frame_4b9db31cc27c8706880452a2c506c4bd );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pieces$pawn$$$function_1___init__ );
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
    NUITKA_CANNOT_GET_HERE( pieces$pawn$$$function_1___init__ );
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


static PyObject *impl_pieces$pawn$$$function_2___str__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    int tmp_cmp_Eq_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    static struct Nuitka_FrameObject *cache_frame_d9119caca42cfb6399f0c53fb0ee182a = NULL;

    struct Nuitka_FrameObject *frame_d9119caca42cfb6399f0c53fb0ee182a;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_d9119caca42cfb6399f0c53fb0ee182a, codeobj_d9119caca42cfb6399f0c53fb0ee182a, module_pieces$pawn, sizeof(void *) );
    frame_d9119caca42cfb6399f0c53fb0ee182a = cache_frame_d9119caca42cfb6399f0c53fb0ee182a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d9119caca42cfb6399f0c53fb0ee182a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d9119caca42cfb6399f0c53fb0ee182a ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_color );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;
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


        exception_lineno = 10;
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
    tmp_return_value = const_str_plain_P;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    tmp_source_name_2 = par_self;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 12;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_compare_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_color );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_2 = const_str_plain_b;
    tmp_cmp_Eq_2 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_2, tmp_compare_right_2 );
    Py_DECREF( tmp_compare_left_2 );
    if ( tmp_cmp_Eq_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Eq_2 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_return_value = const_str_plain_p;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    goto branch_end_2;
    branch_no_2:;
    tmp_return_value = const_str_empty;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_end_2:;
    branch_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d9119caca42cfb6399f0c53fb0ee182a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_d9119caca42cfb6399f0c53fb0ee182a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d9119caca42cfb6399f0c53fb0ee182a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d9119caca42cfb6399f0c53fb0ee182a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d9119caca42cfb6399f0c53fb0ee182a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d9119caca42cfb6399f0c53fb0ee182a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d9119caca42cfb6399f0c53fb0ee182a,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_d9119caca42cfb6399f0c53fb0ee182a == cache_frame_d9119caca42cfb6399f0c53fb0ee182a )
    {
        Py_DECREF( frame_d9119caca42cfb6399f0c53fb0ee182a );
    }
    cache_frame_d9119caca42cfb6399f0c53fb0ee182a = NULL;

    assertFrameObject( frame_d9119caca42cfb6399f0c53fb0ee182a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pieces$pawn$$$function_2___str__ );
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
    NUITKA_CANNOT_GET_HERE( pieces$pawn$$$function_2___str__ );
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


static PyObject *impl_pieces$pawn$$$function_3_scan( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_dn = NULL;
    PyObject *var_availMoves = NULL;
    PyObject *var_optionCounter = NULL;
    PyObject *var_blocked = NULL;
    PyObject *var_doubleBlocked = NULL;
    PyObject *var_diagColor = NULL;
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
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_name_3;
    PyObject *tmp_assattr_name_4;
    PyObject *tmp_assattr_name_5;
    PyObject *tmp_assattr_name_6;
    PyObject *tmp_assattr_name_7;
    PyObject *tmp_assattr_name_8;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assattr_target_3;
    PyObject *tmp_assattr_target_4;
    PyObject *tmp_assattr_target_5;
    PyObject *tmp_assattr_target_6;
    PyObject *tmp_assattr_target_7;
    PyObject *tmp_assattr_target_8;
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
    int tmp_cmp_Eq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
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
    PyObject *tmp_left_name_25;
    PyObject *tmp_left_name_26;
    PyObject *tmp_left_name_27;
    PyObject *tmp_left_name_28;
    PyObject *tmp_left_name_29;
    PyObject *tmp_left_name_30;
    PyObject *tmp_left_name_31;
    PyObject *tmp_left_name_32;
    PyObject *tmp_left_name_33;
    PyObject *tmp_left_name_34;
    PyObject *tmp_left_name_35;
    PyObject *tmp_left_name_36;
    PyObject *tmp_left_name_37;
    PyObject *tmp_left_name_38;
    PyObject *tmp_left_name_39;
    PyObject *tmp_left_name_40;
    PyObject *tmp_left_name_41;
    PyObject *tmp_left_name_42;
    PyObject *tmp_left_name_43;
    PyObject *tmp_left_name_44;
    PyObject *tmp_left_name_45;
    PyObject *tmp_left_name_46;
    PyObject *tmp_left_name_47;
    PyObject *tmp_left_name_48;
    PyObject *tmp_left_name_49;
    PyObject *tmp_left_name_50;
    PyObject *tmp_left_name_51;
    PyObject *tmp_left_name_52;
    PyObject *tmp_operand_name_1;
    PyObject *tmp_operand_name_2;
    int tmp_or_left_truth_1;
    int tmp_or_left_truth_2;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_left_value_2;
    PyObject *tmp_or_right_value_1;
    PyObject *tmp_or_right_value_2;
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
    PyObject *tmp_right_name_33;
    PyObject *tmp_right_name_34;
    PyObject *tmp_right_name_35;
    PyObject *tmp_right_name_36;
    PyObject *tmp_right_name_37;
    PyObject *tmp_right_name_38;
    PyObject *tmp_right_name_39;
    PyObject *tmp_right_name_40;
    PyObject *tmp_right_name_41;
    PyObject *tmp_right_name_42;
    PyObject *tmp_right_name_43;
    PyObject *tmp_right_name_44;
    PyObject *tmp_right_name_45;
    PyObject *tmp_right_name_46;
    PyObject *tmp_right_name_47;
    PyObject *tmp_right_name_48;
    PyObject *tmp_right_name_49;
    PyObject *tmp_right_name_50;
    PyObject *tmp_right_name_51;
    PyObject *tmp_right_name_52;
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
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_6a2e2c30dfe3a1ee8eedfeebe254752a = NULL;

    struct Nuitka_FrameObject *frame_6a2e2c30dfe3a1ee8eedfeebe254752a;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_6a2e2c30dfe3a1ee8eedfeebe254752a, codeobj_6a2e2c30dfe3a1ee8eedfeebe254752a, module_pieces$pawn, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_6a2e2c30dfe3a1ee8eedfeebe254752a = cache_frame_6a2e2c30dfe3a1ee8eedfeebe254752a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_6a2e2c30dfe3a1ee8eedfeebe254752a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_6a2e2c30dfe3a1ee8eedfeebe254752a ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_color );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = const_str_plain_W;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_1, tmp_compare_right_1 );
    Py_DECREF( tmp_compare_left_1 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;
        type_description_1 = "ooooooo";
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
    tmp_assign_source_1 = const_int_neg_1;
    assert( var_dn == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var_dn = tmp_assign_source_1;

    goto branch_end_1;
    branch_no_1:;
    tmp_assign_source_2 = const_int_pos_1;
    assert( var_dn == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var_dn = tmp_assign_source_2;

    branch_end_1:;
    tmp_assign_source_3 = PyList_New( 0 );
    assert( var_availMoves == NULL );
    var_availMoves = tmp_assign_source_3;

    tmp_assign_source_4 = const_int_pos_1;
    assert( var_optionCounter == NULL );
    Py_INCREF( tmp_assign_source_4 );
    var_optionCounter = tmp_assign_source_4;

    tmp_assign_source_5 = Py_True;
    assert( var_blocked == NULL );
    Py_INCREF( tmp_assign_source_5 );
    var_blocked = tmp_assign_source_5;

    tmp_assign_source_6 = Py_True;
    assert( var_doubleBlocked == NULL );
    Py_INCREF( tmp_assign_source_6 );
    var_doubleBlocked = tmp_assign_source_6;

    tmp_source_name_2 = par_self;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 28;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_row );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_1 = const_int_0;
    tmp_and_left_value_1 = RICH_COMPARE_GT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_1 );

        exception_lineno = 28;
        type_description_1 = "ooooooo";
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
    tmp_source_name_3 = par_self;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 28;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_color );
    if ( tmp_compexpr_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_2 = const_str_plain_W;
    tmp_and_right_value_1 = RICH_COMPARE_EQ( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    Py_DECREF( tmp_compexpr_left_2 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_or_left_value_1 = tmp_and_right_value_1;
    goto and_end_1;
    and_left_1:;
    tmp_or_left_value_1 = tmp_and_left_value_1;
    and_end_1:;
    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    if ( tmp_or_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_or_left_value_1 );

        exception_lineno = 29;
        type_description_1 = "ooooooo";
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
    tmp_source_name_4 = par_self;

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 29;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_left_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_row );
    if ( tmp_compexpr_left_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_3 = const_int_pos_7;
    tmp_and_left_value_2 = RICH_COMPARE_LT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
    Py_DECREF( tmp_compexpr_left_3 );
    if ( tmp_and_left_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_2 = CHECK_IF_TRUE( tmp_and_left_value_2 );
    if ( tmp_and_left_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_2 );

        exception_lineno = 29;
        type_description_1 = "ooooooo";
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
    tmp_source_name_5 = par_self;

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 29;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_left_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_color );
    if ( tmp_compexpr_left_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_4 = const_str_plain_b;
    tmp_and_right_value_2 = RICH_COMPARE_EQ( tmp_compexpr_left_4, tmp_compexpr_right_4 );
    Py_DECREF( tmp_compexpr_left_4 );
    if ( tmp_and_right_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_or_right_value_1 = tmp_and_right_value_2;
    goto and_end_2;
    and_left_2:;
    tmp_or_right_value_1 = tmp_and_left_value_2;
    and_end_2:;
    tmp_cond_value_1 = tmp_or_right_value_1;
    goto or_end_1;
    or_left_1:;
    tmp_cond_value_1 = tmp_or_left_value_1;
    or_end_1:;
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 29;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_pieces$pawn, (Nuitka_StringObject *)const_str_plain_board );

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

        exception_lineno = 30;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_Grid );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_8 = par_self;

    if ( tmp_source_name_8 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 30;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_row );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 30;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_2 = const_int_pos_1;
    tmp_right_name_2 = var_dn;

    if ( tmp_right_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_left_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dn" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 30;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_1 = BINARY_OPERATION_MUL( tmp_left_name_2, tmp_right_name_2 );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_left_name_1 );

        exception_lineno = 30;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 30;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_9 = par_self;

    if ( tmp_source_name_9 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 30;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_col );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );

        exception_lineno = 30;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    frame_6a2e2c30dfe3a1ee8eedfeebe254752a->m_frame.f_lineno = 30;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_source_name_6 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_source_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_7 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_pieceStatus );
    Py_DECREF( tmp_source_name_6 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_blocked;
        var_blocked = tmp_assign_source_7;
        Py_XDECREF( old );
    }

    branch_no_2:;
    tmp_source_name_10 = par_self;

    if ( tmp_source_name_10 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 32;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_left_5 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_row );
    if ( tmp_compexpr_left_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_5 = const_int_pos_1;
    tmp_and_left_value_3 = RICH_COMPARE_GT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
    Py_DECREF( tmp_compexpr_left_5 );
    if ( tmp_and_left_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_3 = CHECK_IF_TRUE( tmp_and_left_value_3 );
    if ( tmp_and_left_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_3 );

        exception_lineno = 32;
        type_description_1 = "ooooooo";
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
    tmp_source_name_11 = par_self;

    if ( tmp_source_name_11 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 32;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_left_6 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_color );
    if ( tmp_compexpr_left_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_6 = const_str_plain_W;
    tmp_and_right_value_3 = RICH_COMPARE_EQ( tmp_compexpr_left_6, tmp_compexpr_right_6 );
    Py_DECREF( tmp_compexpr_left_6 );
    if ( tmp_and_right_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_or_left_value_2 = tmp_and_right_value_3;
    goto and_end_3;
    and_left_3:;
    tmp_or_left_value_2 = tmp_and_left_value_3;
    and_end_3:;
    tmp_or_left_truth_2 = CHECK_IF_TRUE( tmp_or_left_value_2 );
    if ( tmp_or_left_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_or_left_value_2 );

        exception_lineno = 33;
        type_description_1 = "ooooooo";
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
    tmp_source_name_12 = par_self;

    if ( tmp_source_name_12 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 33;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_left_7 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_row );
    if ( tmp_compexpr_left_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_7 = const_int_pos_6;
    tmp_and_left_value_4 = RICH_COMPARE_LT( tmp_compexpr_left_7, tmp_compexpr_right_7 );
    Py_DECREF( tmp_compexpr_left_7 );
    if ( tmp_and_left_value_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_4 = CHECK_IF_TRUE( tmp_and_left_value_4 );
    if ( tmp_and_left_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_4 );

        exception_lineno = 33;
        type_description_1 = "ooooooo";
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
    tmp_source_name_13 = par_self;

    if ( tmp_source_name_13 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 33;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_left_8 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_color );
    if ( tmp_compexpr_left_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_8 = const_str_plain_b;
    tmp_and_right_value_4 = RICH_COMPARE_EQ( tmp_compexpr_left_8, tmp_compexpr_right_8 );
    Py_DECREF( tmp_compexpr_left_8 );
    if ( tmp_and_right_value_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_or_right_value_2 = tmp_and_right_value_4;
    goto and_end_4;
    and_left_4:;
    tmp_or_right_value_2 = tmp_and_left_value_4;
    and_end_4:;
    tmp_cond_value_2 = tmp_or_right_value_2;
    goto or_end_2;
    or_left_2:;
    tmp_cond_value_2 = tmp_or_left_value_2;
    or_end_2:;
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        exception_lineno = 33;
        type_description_1 = "ooooooo";
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
    tmp_source_name_15 = GET_STRING_DICT_VALUE( moduledict_pieces$pawn, (Nuitka_StringObject *)const_str_plain_board );

    if (unlikely( tmp_source_name_15 == NULL ))
    {
        tmp_source_name_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_board );
    }

    if ( tmp_source_name_15 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "board" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 34;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_Grid );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_16 = par_self;

    if ( tmp_source_name_16 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 34;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_row );
    if ( tmp_left_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 34;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_4 = const_int_pos_2;
    tmp_right_name_4 = var_dn;

    if ( tmp_right_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_left_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dn" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 34;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_3 = BINARY_OPERATION_MUL( tmp_left_name_4, tmp_right_name_4 );
    if ( tmp_right_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_left_name_3 );

        exception_lineno = 34;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = BINARY_OPERATION_ADD( tmp_left_name_3, tmp_right_name_3 );
    Py_DECREF( tmp_left_name_3 );
    Py_DECREF( tmp_right_name_3 );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 34;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_17 = par_self;

    if ( tmp_source_name_17 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 34;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_col );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_3 );

        exception_lineno = 34;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    frame_6a2e2c30dfe3a1ee8eedfeebe254752a->m_frame.f_lineno = 34;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_source_name_14 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_3 );
    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_source_name_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_8 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_pieceStatus );
    Py_DECREF( tmp_source_name_14 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_doubleBlocked;
        var_doubleBlocked = tmp_assign_source_8;
        Py_XDECREF( old );
    }

    branch_no_3:;
    tmp_cond_value_3 = var_blocked;

    if ( tmp_cond_value_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "blocked" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 37;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_3 == 1 )
    {
        goto branch_no_4;
    }
    else
    {
        goto branch_yes_4;
    }
    branch_yes_4:;
    tmp_source_name_18 = var_availMoves;

    if ( tmp_source_name_18 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "availMoves" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 38;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_append );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_19 = GET_STRING_DICT_VALUE( moduledict_pieces$pawn, (Nuitka_StringObject *)const_str_plain_board );

    if (unlikely( tmp_source_name_19 == NULL ))
    {
        tmp_source_name_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_board );
    }

    if ( tmp_source_name_19 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "board" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 38;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_Grid );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 38;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_20 = par_self;

    if ( tmp_source_name_20 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_called_name_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 38;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_row );
    if ( tmp_left_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_called_name_4 );

        exception_lineno = 38;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_6 = const_int_pos_1;
    tmp_right_name_6 = var_dn;

    if ( tmp_right_name_6 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_left_name_5 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dn" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 38;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_5 = BINARY_OPERATION_MUL( tmp_left_name_6, tmp_right_name_6 );
    if ( tmp_right_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_left_name_5 );

        exception_lineno = 38;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_6 = BINARY_OPERATION_ADD( tmp_left_name_5, tmp_right_name_5 );
    Py_DECREF( tmp_left_name_5 );
    Py_DECREF( tmp_right_name_5 );
    if ( tmp_args_element_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_called_name_4 );

        exception_lineno = 38;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_21 = par_self;

    if ( tmp_source_name_21 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_element_name_6 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 38;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_col );
    if ( tmp_args_element_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_element_name_6 );

        exception_lineno = 38;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    frame_6a2e2c30dfe3a1ee8eedfeebe254752a->m_frame.f_lineno = 38;
    {
        PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7 };
        tmp_args_element_name_5 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    Py_DECREF( tmp_args_element_name_6 );
    Py_DECREF( tmp_args_element_name_7 );
    if ( tmp_args_element_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 38;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    frame_6a2e2c30dfe3a1ee8eedfeebe254752a->m_frame.f_lineno = 38;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_element_name_5 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_assattr_name_1 = Py_True;
    tmp_source_name_22 = GET_STRING_DICT_VALUE( moduledict_pieces$pawn, (Nuitka_StringObject *)const_str_plain_board );

    if (unlikely( tmp_source_name_22 == NULL ))
    {
        tmp_source_name_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_board );
    }

    if ( tmp_source_name_22 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "board" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 39;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_Grid );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 39;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_23 = par_self;

    if ( tmp_source_name_23 == NULL )
    {
        Py_DECREF( tmp_called_name_5 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 39;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain_row );
    if ( tmp_left_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_5 );

        exception_lineno = 39;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_8 = const_int_pos_1;
    tmp_right_name_8 = var_dn;

    if ( tmp_right_name_8 == NULL )
    {
        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_left_name_7 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dn" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 39;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_7 = BINARY_OPERATION_MUL( tmp_left_name_8, tmp_right_name_8 );
    if ( tmp_right_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_left_name_7 );

        exception_lineno = 39;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_8 = BINARY_OPERATION_ADD( tmp_left_name_7, tmp_right_name_7 );
    Py_DECREF( tmp_left_name_7 );
    Py_DECREF( tmp_right_name_7 );
    if ( tmp_args_element_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_5 );

        exception_lineno = 39;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_24 = par_self;

    if ( tmp_source_name_24 == NULL )
    {
        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_args_element_name_8 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 39;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain_col );
    if ( tmp_args_element_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_args_element_name_8 );

        exception_lineno = 39;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    frame_6a2e2c30dfe3a1ee8eedfeebe254752a->m_frame.f_lineno = 39;
    {
        PyObject *call_args[] = { tmp_args_element_name_8, tmp_args_element_name_9 };
        tmp_assattr_target_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_called_name_5 );
    Py_DECREF( tmp_args_element_name_8 );
    Py_DECREF( tmp_args_element_name_9 );
    if ( tmp_assattr_target_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 39;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_des, tmp_assattr_name_1 );
    Py_DECREF( tmp_assattr_target_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 39;
        type_description_1 = "ooooooo";
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

        exception_lineno = 40;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_25 = GET_STRING_DICT_VALUE( moduledict_pieces$pawn, (Nuitka_StringObject *)const_str_plain_board );

    if (unlikely( tmp_source_name_25 == NULL ))
    {
        tmp_source_name_25 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_board );
    }

    if ( tmp_source_name_25 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "board" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 40;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_25, const_str_plain_Grid );
    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_26 = par_self;

    if ( tmp_source_name_26 == NULL )
    {
        Py_DECREF( tmp_called_name_6 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 40;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_26, const_str_plain_row );
    if ( tmp_left_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_6 );

        exception_lineno = 40;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_10 = const_int_pos_1;
    tmp_right_name_10 = var_dn;

    if ( tmp_right_name_10 == NULL )
    {
        Py_DECREF( tmp_called_name_6 );
        Py_DECREF( tmp_left_name_9 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dn" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 40;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_9 = BINARY_OPERATION_MUL( tmp_left_name_10, tmp_right_name_10 );
    if ( tmp_right_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_6 );
        Py_DECREF( tmp_left_name_9 );

        exception_lineno = 40;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_10 = BINARY_OPERATION_ADD( tmp_left_name_9, tmp_right_name_9 );
    Py_DECREF( tmp_left_name_9 );
    Py_DECREF( tmp_right_name_9 );
    if ( tmp_args_element_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_6 );

        exception_lineno = 40;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_27 = par_self;

    if ( tmp_source_name_27 == NULL )
    {
        Py_DECREF( tmp_called_name_6 );
        Py_DECREF( tmp_args_element_name_10 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 40;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_27, const_str_plain_col );
    if ( tmp_args_element_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_6 );
        Py_DECREF( tmp_args_element_name_10 );

        exception_lineno = 40;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    frame_6a2e2c30dfe3a1ee8eedfeebe254752a->m_frame.f_lineno = 40;
    {
        PyObject *call_args[] = { tmp_args_element_name_10, tmp_args_element_name_11 };
        tmp_assattr_target_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_6, call_args );
    }

    Py_DECREF( tmp_called_name_6 );
    Py_DECREF( tmp_args_element_name_10 );
    Py_DECREF( tmp_args_element_name_11 );
    if ( tmp_assattr_target_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_option, tmp_assattr_name_2 );
    Py_DECREF( tmp_assattr_target_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_11 = var_optionCounter;

    if ( tmp_left_name_11 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "optionCounter" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 41;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_11 = const_int_pos_1;
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_11, tmp_right_name_11 );
    tmp_assign_source_9 = tmp_left_name_11;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 41;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    var_optionCounter = tmp_assign_source_9;

    branch_no_4:;
    tmp_source_name_28 = par_self;

    if ( tmp_source_name_28 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 44;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_and_left_value_5 = LOOKUP_ATTRIBUTE( tmp_source_name_28, const_str_plain_firstMove );
    if ( tmp_and_left_value_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_5 = CHECK_IF_TRUE( tmp_and_left_value_5 );
    if ( tmp_and_left_truth_5 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_5 );

        exception_lineno = 44;
        type_description_1 = "ooooooo";
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
    tmp_operand_name_1 = var_blocked;

    if ( tmp_operand_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "blocked" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 44;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_and_left_value_6 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_1 );
    if ( tmp_and_left_value_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_6 = CHECK_IF_TRUE( tmp_and_left_value_6 );
    if ( tmp_and_left_truth_6 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;
        type_description_1 = "ooooooo";
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
    tmp_operand_name_2 = var_doubleBlocked;

    if ( tmp_operand_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "doubleBlocked" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 44;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_and_right_value_6 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_2 );
    if ( tmp_and_right_value_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_right_value_5 = tmp_and_right_value_6;
    goto and_end_6;
    and_left_6:;
    tmp_and_right_value_5 = tmp_and_left_value_6;
    and_end_6:;
    Py_INCREF( tmp_and_right_value_5 );
    tmp_cond_value_4 = tmp_and_right_value_5;
    goto and_end_5;
    and_left_5:;
    tmp_cond_value_4 = tmp_and_left_value_5;
    and_end_5:;
    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_4 );

        exception_lineno = 44;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == 1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_source_name_29 = var_availMoves;

    if ( tmp_source_name_29 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "availMoves" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 45;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_29, const_str_plain_append );
    if ( tmp_called_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 45;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_30 = GET_STRING_DICT_VALUE( moduledict_pieces$pawn, (Nuitka_StringObject *)const_str_plain_board );

    if (unlikely( tmp_source_name_30 == NULL ))
    {
        tmp_source_name_30 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_board );
    }

    if ( tmp_source_name_30 == NULL )
    {
        Py_DECREF( tmp_called_name_7 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "board" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 45;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_30, const_str_plain_Grid );
    if ( tmp_called_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_7 );

        exception_lineno = 45;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_31 = par_self;

    if ( tmp_source_name_31 == NULL )
    {
        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_called_name_8 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 45;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_31, const_str_plain_row );
    if ( tmp_left_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_called_name_8 );

        exception_lineno = 45;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_13 = const_int_pos_2;
    tmp_right_name_13 = var_dn;

    if ( tmp_right_name_13 == NULL )
    {
        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_called_name_8 );
        Py_DECREF( tmp_left_name_12 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dn" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 45;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_12 = BINARY_OPERATION_MUL( tmp_left_name_13, tmp_right_name_13 );
    if ( tmp_right_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_called_name_8 );
        Py_DECREF( tmp_left_name_12 );

        exception_lineno = 45;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_13 = BINARY_OPERATION_ADD( tmp_left_name_12, tmp_right_name_12 );
    Py_DECREF( tmp_left_name_12 );
    Py_DECREF( tmp_right_name_12 );
    if ( tmp_args_element_name_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_called_name_8 );

        exception_lineno = 45;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_32 = par_self;

    if ( tmp_source_name_32 == NULL )
    {
        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_called_name_8 );
        Py_DECREF( tmp_args_element_name_13 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 45;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_32, const_str_plain_col );
    if ( tmp_args_element_name_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_called_name_8 );
        Py_DECREF( tmp_args_element_name_13 );

        exception_lineno = 45;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    frame_6a2e2c30dfe3a1ee8eedfeebe254752a->m_frame.f_lineno = 45;
    {
        PyObject *call_args[] = { tmp_args_element_name_13, tmp_args_element_name_14 };
        tmp_args_element_name_12 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_8, call_args );
    }

    Py_DECREF( tmp_called_name_8 );
    Py_DECREF( tmp_args_element_name_13 );
    Py_DECREF( tmp_args_element_name_14 );
    if ( tmp_args_element_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_7 );

        exception_lineno = 45;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    frame_6a2e2c30dfe3a1ee8eedfeebe254752a->m_frame.f_lineno = 45;
    {
        PyObject *call_args[] = { tmp_args_element_name_12 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
    }

    Py_DECREF( tmp_called_name_7 );
    Py_DECREF( tmp_args_element_name_12 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 45;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_assattr_name_3 = Py_True;
    tmp_source_name_33 = GET_STRING_DICT_VALUE( moduledict_pieces$pawn, (Nuitka_StringObject *)const_str_plain_board );

    if (unlikely( tmp_source_name_33 == NULL ))
    {
        tmp_source_name_33 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_board );
    }

    if ( tmp_source_name_33 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "board" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 46;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_33, const_str_plain_Grid );
    if ( tmp_called_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_34 = par_self;

    if ( tmp_source_name_34 == NULL )
    {
        Py_DECREF( tmp_called_name_9 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 46;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_34, const_str_plain_row );
    if ( tmp_left_name_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_9 );

        exception_lineno = 46;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_15 = const_int_pos_2;
    tmp_right_name_15 = var_dn;

    if ( tmp_right_name_15 == NULL )
    {
        Py_DECREF( tmp_called_name_9 );
        Py_DECREF( tmp_left_name_14 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dn" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 46;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_14 = BINARY_OPERATION_MUL( tmp_left_name_15, tmp_right_name_15 );
    if ( tmp_right_name_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_9 );
        Py_DECREF( tmp_left_name_14 );

        exception_lineno = 46;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_15 = BINARY_OPERATION_ADD( tmp_left_name_14, tmp_right_name_14 );
    Py_DECREF( tmp_left_name_14 );
    Py_DECREF( tmp_right_name_14 );
    if ( tmp_args_element_name_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_9 );

        exception_lineno = 46;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_35 = par_self;

    if ( tmp_source_name_35 == NULL )
    {
        Py_DECREF( tmp_called_name_9 );
        Py_DECREF( tmp_args_element_name_15 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 46;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_16 = LOOKUP_ATTRIBUTE( tmp_source_name_35, const_str_plain_col );
    if ( tmp_args_element_name_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_9 );
        Py_DECREF( tmp_args_element_name_15 );

        exception_lineno = 46;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    frame_6a2e2c30dfe3a1ee8eedfeebe254752a->m_frame.f_lineno = 46;
    {
        PyObject *call_args[] = { tmp_args_element_name_15, tmp_args_element_name_16 };
        tmp_assattr_target_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_9, call_args );
    }

    Py_DECREF( tmp_called_name_9 );
    Py_DECREF( tmp_args_element_name_15 );
    Py_DECREF( tmp_args_element_name_16 );
    if ( tmp_assattr_target_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_des, tmp_assattr_name_3 );
    Py_DECREF( tmp_assattr_target_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;
        type_description_1 = "ooooooo";
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

        exception_lineno = 47;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_36 = GET_STRING_DICT_VALUE( moduledict_pieces$pawn, (Nuitka_StringObject *)const_str_plain_board );

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

        exception_lineno = 47;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_36, const_str_plain_Grid );
    if ( tmp_called_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 47;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_37 = par_self;

    if ( tmp_source_name_37 == NULL )
    {
        Py_DECREF( tmp_called_name_10 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 47;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_16 = LOOKUP_ATTRIBUTE( tmp_source_name_37, const_str_plain_row );
    if ( tmp_left_name_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_10 );

        exception_lineno = 47;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_17 = const_int_pos_2;
    tmp_right_name_17 = var_dn;

    if ( tmp_right_name_17 == NULL )
    {
        Py_DECREF( tmp_called_name_10 );
        Py_DECREF( tmp_left_name_16 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dn" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 47;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_16 = BINARY_OPERATION_MUL( tmp_left_name_17, tmp_right_name_17 );
    if ( tmp_right_name_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_10 );
        Py_DECREF( tmp_left_name_16 );

        exception_lineno = 47;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_17 = BINARY_OPERATION_ADD( tmp_left_name_16, tmp_right_name_16 );
    Py_DECREF( tmp_left_name_16 );
    Py_DECREF( tmp_right_name_16 );
    if ( tmp_args_element_name_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_10 );

        exception_lineno = 47;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_38 = par_self;

    if ( tmp_source_name_38 == NULL )
    {
        Py_DECREF( tmp_called_name_10 );
        Py_DECREF( tmp_args_element_name_17 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 47;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_18 = LOOKUP_ATTRIBUTE( tmp_source_name_38, const_str_plain_col );
    if ( tmp_args_element_name_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_10 );
        Py_DECREF( tmp_args_element_name_17 );

        exception_lineno = 47;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    frame_6a2e2c30dfe3a1ee8eedfeebe254752a->m_frame.f_lineno = 47;
    {
        PyObject *call_args[] = { tmp_args_element_name_17, tmp_args_element_name_18 };
        tmp_assattr_target_4 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_10, call_args );
    }

    Py_DECREF( tmp_called_name_10 );
    Py_DECREF( tmp_args_element_name_17 );
    Py_DECREF( tmp_args_element_name_18 );
    if ( tmp_assattr_target_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 47;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_option, tmp_assattr_name_4 );
    Py_DECREF( tmp_assattr_target_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 47;
        type_description_1 = "ooooooo";
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

        exception_lineno = 48;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_18 = const_int_pos_1;
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_18, tmp_right_name_18 );
    tmp_assign_source_10 = tmp_left_name_18;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 48;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    var_optionCounter = tmp_assign_source_10;

    branch_no_5:;
    tmp_source_name_39 = par_self;

    if ( tmp_source_name_39 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 52;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_left_9 = LOOKUP_ATTRIBUTE( tmp_source_name_39, const_str_plain_col );
    if ( tmp_compexpr_left_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 52;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_9 = const_int_0;
    tmp_and_left_value_7 = RICH_COMPARE_GT( tmp_compexpr_left_9, tmp_compexpr_right_9 );
    Py_DECREF( tmp_compexpr_left_9 );
    if ( tmp_and_left_value_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 52;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_7 = CHECK_IF_TRUE( tmp_and_left_value_7 );
    if ( tmp_and_left_truth_7 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_7 );

        exception_lineno = 52;
        type_description_1 = "ooooooo";
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
    tmp_source_name_40 = par_self;

    if ( tmp_source_name_40 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 52;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_19 = LOOKUP_ATTRIBUTE( tmp_source_name_40, const_str_plain_row );
    if ( tmp_left_name_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 52;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_20 = const_int_pos_1;
    tmp_right_name_20 = var_dn;

    if ( tmp_right_name_20 == NULL )
    {
        Py_DECREF( tmp_left_name_19 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dn" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 52;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_19 = BINARY_OPERATION_MUL( tmp_left_name_20, tmp_right_name_20 );
    if ( tmp_right_name_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_19 );

        exception_lineno = 52;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_left_10 = BINARY_OPERATION_ADD( tmp_left_name_19, tmp_right_name_19 );
    Py_DECREF( tmp_left_name_19 );
    Py_DECREF( tmp_right_name_19 );
    if ( tmp_compexpr_left_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 52;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_10 = const_int_0;
    tmp_and_left_value_8 = RICH_COMPARE_GT( tmp_compexpr_left_10, tmp_compexpr_right_10 );
    Py_DECREF( tmp_compexpr_left_10 );
    if ( tmp_and_left_value_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 52;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_8 = CHECK_IF_TRUE( tmp_and_left_value_8 );
    if ( tmp_and_left_truth_8 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_8 );

        exception_lineno = 52;
        type_description_1 = "ooooooo";
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
    tmp_source_name_41 = par_self;

    if ( tmp_source_name_41 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 52;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_21 = LOOKUP_ATTRIBUTE( tmp_source_name_41, const_str_plain_row );
    if ( tmp_left_name_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 52;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_22 = const_int_pos_1;
    tmp_right_name_22 = var_dn;

    if ( tmp_right_name_22 == NULL )
    {
        Py_DECREF( tmp_left_name_21 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dn" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 52;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_21 = BINARY_OPERATION_MUL( tmp_left_name_22, tmp_right_name_22 );
    if ( tmp_right_name_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_21 );

        exception_lineno = 52;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_left_11 = BINARY_OPERATION_ADD( tmp_left_name_21, tmp_right_name_21 );
    Py_DECREF( tmp_left_name_21 );
    Py_DECREF( tmp_right_name_21 );
    if ( tmp_compexpr_left_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 52;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_11 = const_int_pos_7;
    tmp_and_right_value_8 = RICH_COMPARE_LT( tmp_compexpr_left_11, tmp_compexpr_right_11 );
    Py_DECREF( tmp_compexpr_left_11 );
    if ( tmp_and_right_value_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 52;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_right_value_7 = tmp_and_right_value_8;
    goto and_end_8;
    and_left_8:;
    tmp_and_right_value_7 = tmp_and_left_value_8;
    and_end_8:;
    tmp_cond_value_5 = tmp_and_right_value_7;
    goto and_end_7;
    and_left_7:;
    tmp_cond_value_5 = tmp_and_left_value_7;
    and_end_7:;
    tmp_cond_truth_5 = CHECK_IF_TRUE( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_5 );

        exception_lineno = 52;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == 1 )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_source_name_44 = GET_STRING_DICT_VALUE( moduledict_pieces$pawn, (Nuitka_StringObject *)const_str_plain_board );

    if (unlikely( tmp_source_name_44 == NULL ))
    {
        tmp_source_name_44 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_board );
    }

    if ( tmp_source_name_44 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "board" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 53;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_44, const_str_plain_Grid );
    if ( tmp_called_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 53;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_45 = par_self;

    if ( tmp_source_name_45 == NULL )
    {
        Py_DECREF( tmp_called_name_11 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 53;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_23 = LOOKUP_ATTRIBUTE( tmp_source_name_45, const_str_plain_row );
    if ( tmp_left_name_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_11 );

        exception_lineno = 53;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_24 = const_int_pos_1;
    tmp_right_name_24 = var_dn;

    if ( tmp_right_name_24 == NULL )
    {
        Py_DECREF( tmp_called_name_11 );
        Py_DECREF( tmp_left_name_23 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dn" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 53;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_23 = BINARY_OPERATION_MUL( tmp_left_name_24, tmp_right_name_24 );
    if ( tmp_right_name_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_11 );
        Py_DECREF( tmp_left_name_23 );

        exception_lineno = 53;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_19 = BINARY_OPERATION_ADD( tmp_left_name_23, tmp_right_name_23 );
    Py_DECREF( tmp_left_name_23 );
    Py_DECREF( tmp_right_name_23 );
    if ( tmp_args_element_name_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_11 );

        exception_lineno = 53;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_46 = par_self;

    if ( tmp_source_name_46 == NULL )
    {
        Py_DECREF( tmp_called_name_11 );
        Py_DECREF( tmp_args_element_name_19 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 53;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_25 = LOOKUP_ATTRIBUTE( tmp_source_name_46, const_str_plain_col );
    if ( tmp_left_name_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_11 );
        Py_DECREF( tmp_args_element_name_19 );

        exception_lineno = 53;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_25 = const_int_pos_1;
    tmp_args_element_name_20 = BINARY_OPERATION_SUB( tmp_left_name_25, tmp_right_name_25 );
    Py_DECREF( tmp_left_name_25 );
    if ( tmp_args_element_name_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_11 );
        Py_DECREF( tmp_args_element_name_19 );

        exception_lineno = 53;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    frame_6a2e2c30dfe3a1ee8eedfeebe254752a->m_frame.f_lineno = 53;
    {
        PyObject *call_args[] = { tmp_args_element_name_19, tmp_args_element_name_20 };
        tmp_source_name_43 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_11, call_args );
    }

    Py_DECREF( tmp_called_name_11 );
    Py_DECREF( tmp_args_element_name_19 );
    Py_DECREF( tmp_args_element_name_20 );
    if ( tmp_source_name_43 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 53;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_42 = LOOKUP_ATTRIBUTE( tmp_source_name_43, const_str_plain_piece );
    Py_DECREF( tmp_source_name_43 );
    if ( tmp_source_name_42 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 53;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_11 = LOOKUP_ATTRIBUTE( tmp_source_name_42, const_str_plain_color );
    Py_DECREF( tmp_source_name_42 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 53;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_diagColor == NULL );
    var_diagColor = tmp_assign_source_11;

    tmp_compexpr_left_12 = var_diagColor;

    CHECK_OBJECT( tmp_compexpr_left_12 );
    tmp_source_name_47 = par_self;

    if ( tmp_source_name_47 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 55;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_right_12 = LOOKUP_ATTRIBUTE( tmp_source_name_47, const_str_plain_color );
    if ( tmp_compexpr_right_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_value_9 = RICH_COMPARE_NE( tmp_compexpr_left_12, tmp_compexpr_right_12 );
    Py_DECREF( tmp_compexpr_right_12 );
    if ( tmp_and_left_value_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_9 = CHECK_IF_TRUE( tmp_and_left_value_9 );
    if ( tmp_and_left_truth_9 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_9 );

        exception_lineno = 55;
        type_description_1 = "ooooooo";
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
    tmp_compexpr_left_13 = var_diagColor;

    if ( tmp_compexpr_left_13 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "diagColor" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 55;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_right_13 = const_str_plain_none;
    tmp_and_right_value_9 = RICH_COMPARE_NE( tmp_compexpr_left_13, tmp_compexpr_right_13 );
    if ( tmp_and_right_value_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_value_6 = tmp_and_right_value_9;
    goto and_end_9;
    and_left_9:;
    tmp_cond_value_6 = tmp_and_left_value_9;
    and_end_9:;
    tmp_cond_truth_6 = CHECK_IF_TRUE( tmp_cond_value_6 );
    if ( tmp_cond_truth_6 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_6 );

        exception_lineno = 55;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_6 );
    if ( tmp_cond_truth_6 == 1 )
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_source_name_48 = var_availMoves;

    if ( tmp_source_name_48 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "availMoves" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 56;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_48, const_str_plain_append );
    if ( tmp_called_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 56;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_49 = GET_STRING_DICT_VALUE( moduledict_pieces$pawn, (Nuitka_StringObject *)const_str_plain_board );

    if (unlikely( tmp_source_name_49 == NULL ))
    {
        tmp_source_name_49 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_board );
    }

    if ( tmp_source_name_49 == NULL )
    {
        Py_DECREF( tmp_called_name_12 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "board" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 56;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_49, const_str_plain_Grid );
    if ( tmp_called_name_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_12 );

        exception_lineno = 56;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_50 = par_self;

    if ( tmp_source_name_50 == NULL )
    {
        Py_DECREF( tmp_called_name_12 );
        Py_DECREF( tmp_called_name_13 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 56;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_26 = LOOKUP_ATTRIBUTE( tmp_source_name_50, const_str_plain_row );
    if ( tmp_left_name_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_12 );
        Py_DECREF( tmp_called_name_13 );

        exception_lineno = 56;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_27 = const_int_pos_1;
    tmp_right_name_27 = var_dn;

    if ( tmp_right_name_27 == NULL )
    {
        Py_DECREF( tmp_called_name_12 );
        Py_DECREF( tmp_called_name_13 );
        Py_DECREF( tmp_left_name_26 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dn" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 56;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_26 = BINARY_OPERATION_MUL( tmp_left_name_27, tmp_right_name_27 );
    if ( tmp_right_name_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_12 );
        Py_DECREF( tmp_called_name_13 );
        Py_DECREF( tmp_left_name_26 );

        exception_lineno = 56;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_22 = BINARY_OPERATION_ADD( tmp_left_name_26, tmp_right_name_26 );
    Py_DECREF( tmp_left_name_26 );
    Py_DECREF( tmp_right_name_26 );
    if ( tmp_args_element_name_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_12 );
        Py_DECREF( tmp_called_name_13 );

        exception_lineno = 56;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_51 = par_self;

    if ( tmp_source_name_51 == NULL )
    {
        Py_DECREF( tmp_called_name_12 );
        Py_DECREF( tmp_called_name_13 );
        Py_DECREF( tmp_args_element_name_22 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 56;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_28 = LOOKUP_ATTRIBUTE( tmp_source_name_51, const_str_plain_col );
    if ( tmp_left_name_28 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_12 );
        Py_DECREF( tmp_called_name_13 );
        Py_DECREF( tmp_args_element_name_22 );

        exception_lineno = 56;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_28 = const_int_pos_1;
    tmp_args_element_name_23 = BINARY_OPERATION_SUB( tmp_left_name_28, tmp_right_name_28 );
    Py_DECREF( tmp_left_name_28 );
    if ( tmp_args_element_name_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_12 );
        Py_DECREF( tmp_called_name_13 );
        Py_DECREF( tmp_args_element_name_22 );

        exception_lineno = 56;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    frame_6a2e2c30dfe3a1ee8eedfeebe254752a->m_frame.f_lineno = 56;
    {
        PyObject *call_args[] = { tmp_args_element_name_22, tmp_args_element_name_23 };
        tmp_args_element_name_21 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_13, call_args );
    }

    Py_DECREF( tmp_called_name_13 );
    Py_DECREF( tmp_args_element_name_22 );
    Py_DECREF( tmp_args_element_name_23 );
    if ( tmp_args_element_name_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_12 );

        exception_lineno = 56;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    frame_6a2e2c30dfe3a1ee8eedfeebe254752a->m_frame.f_lineno = 56;
    {
        PyObject *call_args[] = { tmp_args_element_name_21 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_12, call_args );
    }

    Py_DECREF( tmp_called_name_12 );
    Py_DECREF( tmp_args_element_name_21 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 56;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_assattr_name_5 = Py_True;
    tmp_source_name_52 = GET_STRING_DICT_VALUE( moduledict_pieces$pawn, (Nuitka_StringObject *)const_str_plain_board );

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

        exception_lineno = 57;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_52, const_str_plain_Grid );
    if ( tmp_called_name_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 57;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_53 = par_self;

    if ( tmp_source_name_53 == NULL )
    {
        Py_DECREF( tmp_called_name_14 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 57;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_29 = LOOKUP_ATTRIBUTE( tmp_source_name_53, const_str_plain_row );
    if ( tmp_left_name_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_14 );

        exception_lineno = 57;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_30 = const_int_pos_1;
    tmp_right_name_30 = var_dn;

    if ( tmp_right_name_30 == NULL )
    {
        Py_DECREF( tmp_called_name_14 );
        Py_DECREF( tmp_left_name_29 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dn" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 57;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_29 = BINARY_OPERATION_MUL( tmp_left_name_30, tmp_right_name_30 );
    if ( tmp_right_name_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_14 );
        Py_DECREF( tmp_left_name_29 );

        exception_lineno = 57;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_24 = BINARY_OPERATION_ADD( tmp_left_name_29, tmp_right_name_29 );
    Py_DECREF( tmp_left_name_29 );
    Py_DECREF( tmp_right_name_29 );
    if ( tmp_args_element_name_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_14 );

        exception_lineno = 57;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_54 = par_self;

    if ( tmp_source_name_54 == NULL )
    {
        Py_DECREF( tmp_called_name_14 );
        Py_DECREF( tmp_args_element_name_24 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 57;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_31 = LOOKUP_ATTRIBUTE( tmp_source_name_54, const_str_plain_col );
    if ( tmp_left_name_31 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_14 );
        Py_DECREF( tmp_args_element_name_24 );

        exception_lineno = 57;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_31 = const_int_pos_1;
    tmp_args_element_name_25 = BINARY_OPERATION_SUB( tmp_left_name_31, tmp_right_name_31 );
    Py_DECREF( tmp_left_name_31 );
    if ( tmp_args_element_name_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_14 );
        Py_DECREF( tmp_args_element_name_24 );

        exception_lineno = 57;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    frame_6a2e2c30dfe3a1ee8eedfeebe254752a->m_frame.f_lineno = 57;
    {
        PyObject *call_args[] = { tmp_args_element_name_24, tmp_args_element_name_25 };
        tmp_assattr_target_5 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_14, call_args );
    }

    Py_DECREF( tmp_called_name_14 );
    Py_DECREF( tmp_args_element_name_24 );
    Py_DECREF( tmp_args_element_name_25 );
    if ( tmp_assattr_target_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 57;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_des, tmp_assattr_name_5 );
    Py_DECREF( tmp_assattr_target_5 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 57;
        type_description_1 = "ooooooo";
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

        exception_lineno = 58;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_55 = GET_STRING_DICT_VALUE( moduledict_pieces$pawn, (Nuitka_StringObject *)const_str_plain_board );

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

        exception_lineno = 58;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_15 = LOOKUP_ATTRIBUTE( tmp_source_name_55, const_str_plain_Grid );
    if ( tmp_called_name_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_56 = par_self;

    if ( tmp_source_name_56 == NULL )
    {
        Py_DECREF( tmp_called_name_15 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 58;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_32 = LOOKUP_ATTRIBUTE( tmp_source_name_56, const_str_plain_row );
    if ( tmp_left_name_32 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_15 );

        exception_lineno = 58;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_33 = const_int_pos_1;
    tmp_right_name_33 = var_dn;

    if ( tmp_right_name_33 == NULL )
    {
        Py_DECREF( tmp_called_name_15 );
        Py_DECREF( tmp_left_name_32 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dn" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 58;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_32 = BINARY_OPERATION_MUL( tmp_left_name_33, tmp_right_name_33 );
    if ( tmp_right_name_32 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_15 );
        Py_DECREF( tmp_left_name_32 );

        exception_lineno = 58;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_26 = BINARY_OPERATION_ADD( tmp_left_name_32, tmp_right_name_32 );
    Py_DECREF( tmp_left_name_32 );
    Py_DECREF( tmp_right_name_32 );
    if ( tmp_args_element_name_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_15 );

        exception_lineno = 58;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_57 = par_self;

    if ( tmp_source_name_57 == NULL )
    {
        Py_DECREF( tmp_called_name_15 );
        Py_DECREF( tmp_args_element_name_26 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 58;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_34 = LOOKUP_ATTRIBUTE( tmp_source_name_57, const_str_plain_col );
    if ( tmp_left_name_34 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_15 );
        Py_DECREF( tmp_args_element_name_26 );

        exception_lineno = 58;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_34 = const_int_pos_1;
    tmp_args_element_name_27 = BINARY_OPERATION_SUB( tmp_left_name_34, tmp_right_name_34 );
    Py_DECREF( tmp_left_name_34 );
    if ( tmp_args_element_name_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_15 );
        Py_DECREF( tmp_args_element_name_26 );

        exception_lineno = 58;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    frame_6a2e2c30dfe3a1ee8eedfeebe254752a->m_frame.f_lineno = 58;
    {
        PyObject *call_args[] = { tmp_args_element_name_26, tmp_args_element_name_27 };
        tmp_assattr_target_6 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_15, call_args );
    }

    Py_DECREF( tmp_called_name_15 );
    Py_DECREF( tmp_args_element_name_26 );
    Py_DECREF( tmp_args_element_name_27 );
    if ( tmp_assattr_target_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain_option, tmp_assattr_name_6 );
    Py_DECREF( tmp_assattr_target_6 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_35 = var_optionCounter;

    if ( tmp_left_name_35 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "optionCounter" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 59;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_35 = const_int_pos_1;
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_35, tmp_right_name_35 );
    tmp_assign_source_12 = tmp_left_name_35;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 59;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    var_optionCounter = tmp_assign_source_12;

    branch_no_7:;
    branch_no_6:;
    tmp_source_name_58 = par_self;

    if ( tmp_source_name_58 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 62;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_left_14 = LOOKUP_ATTRIBUTE( tmp_source_name_58, const_str_plain_col );
    if ( tmp_compexpr_left_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_14 = const_int_pos_7;
    tmp_and_left_value_10 = RICH_COMPARE_LT( tmp_compexpr_left_14, tmp_compexpr_right_14 );
    Py_DECREF( tmp_compexpr_left_14 );
    if ( tmp_and_left_value_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_10 = CHECK_IF_TRUE( tmp_and_left_value_10 );
    if ( tmp_and_left_truth_10 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_10 );

        exception_lineno = 62;
        type_description_1 = "ooooooo";
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
    Py_DECREF( tmp_and_left_value_10 );
    tmp_source_name_59 = par_self;

    if ( tmp_source_name_59 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 62;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_36 = LOOKUP_ATTRIBUTE( tmp_source_name_59, const_str_plain_row );
    if ( tmp_left_name_36 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_37 = const_int_pos_1;
    tmp_right_name_37 = var_dn;

    if ( tmp_right_name_37 == NULL )
    {
        Py_DECREF( tmp_left_name_36 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dn" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 62;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_36 = BINARY_OPERATION_MUL( tmp_left_name_37, tmp_right_name_37 );
    if ( tmp_right_name_36 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_36 );

        exception_lineno = 62;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_left_15 = BINARY_OPERATION_ADD( tmp_left_name_36, tmp_right_name_36 );
    Py_DECREF( tmp_left_name_36 );
    Py_DECREF( tmp_right_name_36 );
    if ( tmp_compexpr_left_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_15 = const_int_0;
    tmp_and_left_value_11 = RICH_COMPARE_GT( tmp_compexpr_left_15, tmp_compexpr_right_15 );
    Py_DECREF( tmp_compexpr_left_15 );
    if ( tmp_and_left_value_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_11 = CHECK_IF_TRUE( tmp_and_left_value_11 );
    if ( tmp_and_left_truth_11 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_11 );

        exception_lineno = 62;
        type_description_1 = "ooooooo";
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
    tmp_source_name_60 = par_self;

    if ( tmp_source_name_60 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 62;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_38 = LOOKUP_ATTRIBUTE( tmp_source_name_60, const_str_plain_row );
    if ( tmp_left_name_38 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_39 = const_int_pos_1;
    tmp_right_name_39 = var_dn;

    if ( tmp_right_name_39 == NULL )
    {
        Py_DECREF( tmp_left_name_38 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dn" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 62;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_38 = BINARY_OPERATION_MUL( tmp_left_name_39, tmp_right_name_39 );
    if ( tmp_right_name_38 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_38 );

        exception_lineno = 62;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_left_16 = BINARY_OPERATION_ADD( tmp_left_name_38, tmp_right_name_38 );
    Py_DECREF( tmp_left_name_38 );
    Py_DECREF( tmp_right_name_38 );
    if ( tmp_compexpr_left_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_16 = const_int_pos_7;
    tmp_and_right_value_11 = RICH_COMPARE_LT( tmp_compexpr_left_16, tmp_compexpr_right_16 );
    Py_DECREF( tmp_compexpr_left_16 );
    if ( tmp_and_right_value_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_right_value_10 = tmp_and_right_value_11;
    goto and_end_11;
    and_left_11:;
    tmp_and_right_value_10 = tmp_and_left_value_11;
    and_end_11:;
    tmp_cond_value_7 = tmp_and_right_value_10;
    goto and_end_10;
    and_left_10:;
    tmp_cond_value_7 = tmp_and_left_value_10;
    and_end_10:;
    tmp_cond_truth_7 = CHECK_IF_TRUE( tmp_cond_value_7 );
    if ( tmp_cond_truth_7 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_7 );

        exception_lineno = 62;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_7 );
    if ( tmp_cond_truth_7 == 1 )
    {
        goto branch_yes_8;
    }
    else
    {
        goto branch_no_8;
    }
    branch_yes_8:;
    tmp_source_name_63 = GET_STRING_DICT_VALUE( moduledict_pieces$pawn, (Nuitka_StringObject *)const_str_plain_board );

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

        exception_lineno = 63;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_16 = LOOKUP_ATTRIBUTE( tmp_source_name_63, const_str_plain_Grid );
    if ( tmp_called_name_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 63;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_64 = par_self;

    if ( tmp_source_name_64 == NULL )
    {
        Py_DECREF( tmp_called_name_16 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 63;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_40 = LOOKUP_ATTRIBUTE( tmp_source_name_64, const_str_plain_row );
    if ( tmp_left_name_40 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_16 );

        exception_lineno = 63;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_41 = const_int_pos_1;
    tmp_right_name_41 = var_dn;

    if ( tmp_right_name_41 == NULL )
    {
        Py_DECREF( tmp_called_name_16 );
        Py_DECREF( tmp_left_name_40 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dn" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 63;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_40 = BINARY_OPERATION_MUL( tmp_left_name_41, tmp_right_name_41 );
    if ( tmp_right_name_40 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_16 );
        Py_DECREF( tmp_left_name_40 );

        exception_lineno = 63;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_28 = BINARY_OPERATION_ADD( tmp_left_name_40, tmp_right_name_40 );
    Py_DECREF( tmp_left_name_40 );
    Py_DECREF( tmp_right_name_40 );
    if ( tmp_args_element_name_28 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_16 );

        exception_lineno = 63;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_65 = par_self;

    if ( tmp_source_name_65 == NULL )
    {
        Py_DECREF( tmp_called_name_16 );
        Py_DECREF( tmp_args_element_name_28 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 63;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_42 = LOOKUP_ATTRIBUTE( tmp_source_name_65, const_str_plain_col );
    if ( tmp_left_name_42 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_16 );
        Py_DECREF( tmp_args_element_name_28 );

        exception_lineno = 63;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_42 = const_int_pos_1;
    tmp_args_element_name_29 = BINARY_OPERATION_ADD( tmp_left_name_42, tmp_right_name_42 );
    Py_DECREF( tmp_left_name_42 );
    if ( tmp_args_element_name_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_16 );
        Py_DECREF( tmp_args_element_name_28 );

        exception_lineno = 63;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    frame_6a2e2c30dfe3a1ee8eedfeebe254752a->m_frame.f_lineno = 63;
    {
        PyObject *call_args[] = { tmp_args_element_name_28, tmp_args_element_name_29 };
        tmp_source_name_62 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_16, call_args );
    }

    Py_DECREF( tmp_called_name_16 );
    Py_DECREF( tmp_args_element_name_28 );
    Py_DECREF( tmp_args_element_name_29 );
    if ( tmp_source_name_62 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 63;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_61 = LOOKUP_ATTRIBUTE( tmp_source_name_62, const_str_plain_piece );
    Py_DECREF( tmp_source_name_62 );
    if ( tmp_source_name_61 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 63;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_13 = LOOKUP_ATTRIBUTE( tmp_source_name_61, const_str_plain_color );
    Py_DECREF( tmp_source_name_61 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 63;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_diagColor;
        var_diagColor = tmp_assign_source_13;
        Py_XDECREF( old );
    }

    tmp_compexpr_left_17 = var_diagColor;

    CHECK_OBJECT( tmp_compexpr_left_17 );
    tmp_source_name_66 = par_self;

    if ( tmp_source_name_66 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 65;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_right_17 = LOOKUP_ATTRIBUTE( tmp_source_name_66, const_str_plain_color );
    if ( tmp_compexpr_right_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 65;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_value_12 = RICH_COMPARE_NE( tmp_compexpr_left_17, tmp_compexpr_right_17 );
    Py_DECREF( tmp_compexpr_right_17 );
    if ( tmp_and_left_value_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 65;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_12 = CHECK_IF_TRUE( tmp_and_left_value_12 );
    if ( tmp_and_left_truth_12 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_12 );

        exception_lineno = 65;
        type_description_1 = "ooooooo";
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
    Py_DECREF( tmp_and_left_value_12 );
    tmp_compexpr_left_18 = var_diagColor;

    if ( tmp_compexpr_left_18 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "diagColor" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 65;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_right_18 = const_str_plain_none;
    tmp_and_right_value_12 = RICH_COMPARE_NE( tmp_compexpr_left_18, tmp_compexpr_right_18 );
    if ( tmp_and_right_value_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 65;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_value_8 = tmp_and_right_value_12;
    goto and_end_12;
    and_left_12:;
    tmp_cond_value_8 = tmp_and_left_value_12;
    and_end_12:;
    tmp_cond_truth_8 = CHECK_IF_TRUE( tmp_cond_value_8 );
    if ( tmp_cond_truth_8 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_8 );

        exception_lineno = 65;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_8 );
    if ( tmp_cond_truth_8 == 1 )
    {
        goto branch_yes_9;
    }
    else
    {
        goto branch_no_9;
    }
    branch_yes_9:;
    tmp_source_name_67 = var_availMoves;

    if ( tmp_source_name_67 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "availMoves" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 66;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_17 = LOOKUP_ATTRIBUTE( tmp_source_name_67, const_str_plain_append );
    if ( tmp_called_name_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_68 = GET_STRING_DICT_VALUE( moduledict_pieces$pawn, (Nuitka_StringObject *)const_str_plain_board );

    if (unlikely( tmp_source_name_68 == NULL ))
    {
        tmp_source_name_68 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_board );
    }

    if ( tmp_source_name_68 == NULL )
    {
        Py_DECREF( tmp_called_name_17 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "board" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 66;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_18 = LOOKUP_ATTRIBUTE( tmp_source_name_68, const_str_plain_Grid );
    if ( tmp_called_name_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_17 );

        exception_lineno = 66;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_69 = par_self;

    if ( tmp_source_name_69 == NULL )
    {
        Py_DECREF( tmp_called_name_17 );
        Py_DECREF( tmp_called_name_18 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 66;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_43 = LOOKUP_ATTRIBUTE( tmp_source_name_69, const_str_plain_row );
    if ( tmp_left_name_43 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_17 );
        Py_DECREF( tmp_called_name_18 );

        exception_lineno = 66;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_44 = const_int_pos_1;
    tmp_right_name_44 = var_dn;

    if ( tmp_right_name_44 == NULL )
    {
        Py_DECREF( tmp_called_name_17 );
        Py_DECREF( tmp_called_name_18 );
        Py_DECREF( tmp_left_name_43 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dn" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 66;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_43 = BINARY_OPERATION_MUL( tmp_left_name_44, tmp_right_name_44 );
    if ( tmp_right_name_43 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_17 );
        Py_DECREF( tmp_called_name_18 );
        Py_DECREF( tmp_left_name_43 );

        exception_lineno = 66;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_31 = BINARY_OPERATION_ADD( tmp_left_name_43, tmp_right_name_43 );
    Py_DECREF( tmp_left_name_43 );
    Py_DECREF( tmp_right_name_43 );
    if ( tmp_args_element_name_31 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_17 );
        Py_DECREF( tmp_called_name_18 );

        exception_lineno = 66;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_70 = par_self;

    if ( tmp_source_name_70 == NULL )
    {
        Py_DECREF( tmp_called_name_17 );
        Py_DECREF( tmp_called_name_18 );
        Py_DECREF( tmp_args_element_name_31 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 66;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_45 = LOOKUP_ATTRIBUTE( tmp_source_name_70, const_str_plain_col );
    if ( tmp_left_name_45 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_17 );
        Py_DECREF( tmp_called_name_18 );
        Py_DECREF( tmp_args_element_name_31 );

        exception_lineno = 66;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_45 = const_int_pos_1;
    tmp_args_element_name_32 = BINARY_OPERATION_ADD( tmp_left_name_45, tmp_right_name_45 );
    Py_DECREF( tmp_left_name_45 );
    if ( tmp_args_element_name_32 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_17 );
        Py_DECREF( tmp_called_name_18 );
        Py_DECREF( tmp_args_element_name_31 );

        exception_lineno = 66;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    frame_6a2e2c30dfe3a1ee8eedfeebe254752a->m_frame.f_lineno = 66;
    {
        PyObject *call_args[] = { tmp_args_element_name_31, tmp_args_element_name_32 };
        tmp_args_element_name_30 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_18, call_args );
    }

    Py_DECREF( tmp_called_name_18 );
    Py_DECREF( tmp_args_element_name_31 );
    Py_DECREF( tmp_args_element_name_32 );
    if ( tmp_args_element_name_30 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_17 );

        exception_lineno = 66;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    frame_6a2e2c30dfe3a1ee8eedfeebe254752a->m_frame.f_lineno = 66;
    {
        PyObject *call_args[] = { tmp_args_element_name_30 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_17, call_args );
    }

    Py_DECREF( tmp_called_name_17 );
    Py_DECREF( tmp_args_element_name_30 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_assattr_name_7 = Py_True;
    tmp_source_name_71 = GET_STRING_DICT_VALUE( moduledict_pieces$pawn, (Nuitka_StringObject *)const_str_plain_board );

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

        exception_lineno = 67;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_19 = LOOKUP_ATTRIBUTE( tmp_source_name_71, const_str_plain_Grid );
    if ( tmp_called_name_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 67;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_72 = par_self;

    if ( tmp_source_name_72 == NULL )
    {
        Py_DECREF( tmp_called_name_19 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 67;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_46 = LOOKUP_ATTRIBUTE( tmp_source_name_72, const_str_plain_row );
    if ( tmp_left_name_46 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_19 );

        exception_lineno = 67;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_47 = const_int_pos_1;
    tmp_right_name_47 = var_dn;

    if ( tmp_right_name_47 == NULL )
    {
        Py_DECREF( tmp_called_name_19 );
        Py_DECREF( tmp_left_name_46 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dn" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 67;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_46 = BINARY_OPERATION_MUL( tmp_left_name_47, tmp_right_name_47 );
    if ( tmp_right_name_46 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_19 );
        Py_DECREF( tmp_left_name_46 );

        exception_lineno = 67;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_33 = BINARY_OPERATION_ADD( tmp_left_name_46, tmp_right_name_46 );
    Py_DECREF( tmp_left_name_46 );
    Py_DECREF( tmp_right_name_46 );
    if ( tmp_args_element_name_33 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_19 );

        exception_lineno = 67;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_73 = par_self;

    if ( tmp_source_name_73 == NULL )
    {
        Py_DECREF( tmp_called_name_19 );
        Py_DECREF( tmp_args_element_name_33 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 67;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_48 = LOOKUP_ATTRIBUTE( tmp_source_name_73, const_str_plain_col );
    if ( tmp_left_name_48 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_19 );
        Py_DECREF( tmp_args_element_name_33 );

        exception_lineno = 67;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_48 = const_int_pos_1;
    tmp_args_element_name_34 = BINARY_OPERATION_ADD( tmp_left_name_48, tmp_right_name_48 );
    Py_DECREF( tmp_left_name_48 );
    if ( tmp_args_element_name_34 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_19 );
        Py_DECREF( tmp_args_element_name_33 );

        exception_lineno = 67;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    frame_6a2e2c30dfe3a1ee8eedfeebe254752a->m_frame.f_lineno = 67;
    {
        PyObject *call_args[] = { tmp_args_element_name_33, tmp_args_element_name_34 };
        tmp_assattr_target_7 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_19, call_args );
    }

    Py_DECREF( tmp_called_name_19 );
    Py_DECREF( tmp_args_element_name_33 );
    Py_DECREF( tmp_args_element_name_34 );
    if ( tmp_assattr_target_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 67;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_7, const_str_plain_des, tmp_assattr_name_7 );
    Py_DECREF( tmp_assattr_target_7 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 67;
        type_description_1 = "ooooooo";
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

        exception_lineno = 68;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_74 = GET_STRING_DICT_VALUE( moduledict_pieces$pawn, (Nuitka_StringObject *)const_str_plain_board );

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

        exception_lineno = 68;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_20 = LOOKUP_ATTRIBUTE( tmp_source_name_74, const_str_plain_Grid );
    if ( tmp_called_name_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 68;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_75 = par_self;

    if ( tmp_source_name_75 == NULL )
    {
        Py_DECREF( tmp_called_name_20 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 68;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_49 = LOOKUP_ATTRIBUTE( tmp_source_name_75, const_str_plain_row );
    if ( tmp_left_name_49 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_20 );

        exception_lineno = 68;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_50 = const_int_pos_1;
    tmp_right_name_50 = var_dn;

    if ( tmp_right_name_50 == NULL )
    {
        Py_DECREF( tmp_called_name_20 );
        Py_DECREF( tmp_left_name_49 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dn" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 68;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_49 = BINARY_OPERATION_MUL( tmp_left_name_50, tmp_right_name_50 );
    if ( tmp_right_name_49 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_20 );
        Py_DECREF( tmp_left_name_49 );

        exception_lineno = 68;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_35 = BINARY_OPERATION_ADD( tmp_left_name_49, tmp_right_name_49 );
    Py_DECREF( tmp_left_name_49 );
    Py_DECREF( tmp_right_name_49 );
    if ( tmp_args_element_name_35 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_20 );

        exception_lineno = 68;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_76 = par_self;

    if ( tmp_source_name_76 == NULL )
    {
        Py_DECREF( tmp_called_name_20 );
        Py_DECREF( tmp_args_element_name_35 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 68;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_51 = LOOKUP_ATTRIBUTE( tmp_source_name_76, const_str_plain_col );
    if ( tmp_left_name_51 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_20 );
        Py_DECREF( tmp_args_element_name_35 );

        exception_lineno = 68;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_51 = const_int_pos_1;
    tmp_args_element_name_36 = BINARY_OPERATION_ADD( tmp_left_name_51, tmp_right_name_51 );
    Py_DECREF( tmp_left_name_51 );
    if ( tmp_args_element_name_36 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_20 );
        Py_DECREF( tmp_args_element_name_35 );

        exception_lineno = 68;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    frame_6a2e2c30dfe3a1ee8eedfeebe254752a->m_frame.f_lineno = 68;
    {
        PyObject *call_args[] = { tmp_args_element_name_35, tmp_args_element_name_36 };
        tmp_assattr_target_8 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_20, call_args );
    }

    Py_DECREF( tmp_called_name_20 );
    Py_DECREF( tmp_args_element_name_35 );
    Py_DECREF( tmp_args_element_name_36 );
    if ( tmp_assattr_target_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 68;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_8, const_str_plain_option, tmp_assattr_name_8 );
    Py_DECREF( tmp_assattr_target_8 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 68;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_52 = var_optionCounter;

    if ( tmp_left_name_52 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "optionCounter" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 69;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_52 = const_int_pos_1;
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_52, tmp_right_name_52 );
    tmp_assign_source_14 = tmp_left_name_52;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 69;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    var_optionCounter = tmp_assign_source_14;

    branch_no_9:;
    branch_no_8:;
    tmp_return_value = var_availMoves;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "availMoves" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 71;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6a2e2c30dfe3a1ee8eedfeebe254752a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_6a2e2c30dfe3a1ee8eedfeebe254752a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6a2e2c30dfe3a1ee8eedfeebe254752a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6a2e2c30dfe3a1ee8eedfeebe254752a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6a2e2c30dfe3a1ee8eedfeebe254752a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6a2e2c30dfe3a1ee8eedfeebe254752a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_6a2e2c30dfe3a1ee8eedfeebe254752a,
        type_description_1,
        par_self,
        var_dn,
        var_availMoves,
        var_optionCounter,
        var_blocked,
        var_doubleBlocked,
        var_diagColor
    );


    // Release cached frame.
    if ( frame_6a2e2c30dfe3a1ee8eedfeebe254752a == cache_frame_6a2e2c30dfe3a1ee8eedfeebe254752a )
    {
        Py_DECREF( frame_6a2e2c30dfe3a1ee8eedfeebe254752a );
    }
    cache_frame_6a2e2c30dfe3a1ee8eedfeebe254752a = NULL;

    assertFrameObject( frame_6a2e2c30dfe3a1ee8eedfeebe254752a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pieces$pawn$$$function_3_scan );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_dn );
    var_dn = NULL;

    Py_XDECREF( var_availMoves );
    var_availMoves = NULL;

    Py_XDECREF( var_optionCounter );
    var_optionCounter = NULL;

    Py_XDECREF( var_blocked );
    var_blocked = NULL;

    Py_XDECREF( var_doubleBlocked );
    var_doubleBlocked = NULL;

    Py_XDECREF( var_diagColor );
    var_diagColor = NULL;

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

    Py_XDECREF( var_dn );
    var_dn = NULL;

    Py_XDECREF( var_availMoves );
    var_availMoves = NULL;

    Py_XDECREF( var_optionCounter );
    var_optionCounter = NULL;

    Py_XDECREF( var_blocked );
    var_blocked = NULL;

    Py_XDECREF( var_doubleBlocked );
    var_doubleBlocked = NULL;

    Py_XDECREF( var_diagColor );
    var_diagColor = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pieces$pawn$$$function_3_scan );
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



static PyObject *MAKE_FUNCTION_pieces$pawn$$$function_1___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pieces$pawn$$$function_1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_cec81cd20676f472f27a68d9145e326b,
#endif
        codeobj_4b9db31cc27c8706880452a2c506c4bd,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pieces$pawn,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pieces$pawn$$$function_2___str__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pieces$pawn$$$function_2___str__,
        const_str_plain___str__,
#if PYTHON_VERSION >= 300
        const_str_digest_4aba8469c4a8472912544f6e5f2011b3,
#endif
        codeobj_d9119caca42cfb6399f0c53fb0ee182a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pieces$pawn,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pieces$pawn$$$function_3_scan(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pieces$pawn$$$function_3_scan,
        const_str_plain_scan,
#if PYTHON_VERSION >= 300
        const_str_digest_ab1e52224da02ba66331ba8008208e6f,
#endif
        codeobj_6a2e2c30dfe3a1ee8eedfeebe254752a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pieces$pawn,
        Py_None,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_pieces$pawn =
{
    PyModuleDef_HEAD_INIT,
    "pieces.pawn",   /* m_name */
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

MOD_INIT_DECL( pieces$pawn )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_pieces$pawn );
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
    puts("pieces.pawn: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("pieces.pawn: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("pieces.pawn: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initpieces$pawn" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_pieces$pawn = Py_InitModule4(
        "pieces.pawn",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_pieces$pawn = PyModule_Create( &mdef_pieces$pawn );
#endif

    moduledict_pieces$pawn = MODULE_DICT( module_pieces$pawn );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_pieces$pawn, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_pieces$pawn,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );

#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_pieces$pawn, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_pieces$pawn,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_pieces$pawn, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_pieces$pawn,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_pieces$pawn );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_a307e03fca7b5252a158fc901bf452e9, module_pieces$pawn );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_pieces$pawn, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_pieces$pawn, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_pieces$pawn, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

#if PYTHON_VERSION >= 340
#if 0
    UPDATE_STRING_DICT0( moduledict_pieces$pawn, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_pieces$pawn, (Nuitka_StringObject *)const_str_plain___name__ ),
            metapath_based_loader
        };

        PyObject *spec_value = CALL_FUNCTION_WITH_ARGS2(
            module_spec_class,
            args
        );

        UPDATE_STRING_DICT1( moduledict_pieces$pawn, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );

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
    static struct Nuitka_FrameObject *cache_frame_7c4c1c0f778d5e3d5f7f17bc267efd4c_2 = NULL;

    struct Nuitka_FrameObject *frame_7c4c1c0f778d5e3d5f7f17bc267efd4c_2;

    struct Nuitka_FrameObject *frame_182f4aa45d9b70182049fb0f520cca80;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    tmp_outline_return_value_1 = NULL;
    PyObject *locals_pieces$pawn_4 = NULL;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_pieces$pawn, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_c6ec63f114a9e2a57091ef5b9454f850;
    UPDATE_STRING_DICT0( moduledict_pieces$pawn, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_pieces$pawn, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    // Frame without reuse.
    frame_182f4aa45d9b70182049fb0f520cca80 = MAKE_MODULE_FRAME( codeobj_182f4aa45d9b70182049fb0f520cca80, module_pieces$pawn );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_182f4aa45d9b70182049fb0f520cca80 );
    assert( Py_REFCNT( frame_182f4aa45d9b70182049fb0f520cca80 ) == 2 );

    // Framed code:
    tmp_name_name_1 = const_str_plain_pieces;
    tmp_globals_name_1 = (PyObject *)moduledict_pieces$pawn;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain_Piece_tuple;
    tmp_level_name_1 = const_int_0;
    frame_182f4aa45d9b70182049fb0f520cca80->m_frame.f_lineno = 1;
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
    UPDATE_STRING_DICT1( moduledict_pieces$pawn, (Nuitka_StringObject *)const_str_plain_Piece, tmp_assign_source_4 );
    tmp_name_name_2 = const_str_plain_board;
    tmp_globals_name_2 = (PyObject *)moduledict_pieces$pawn;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = Py_None;
    tmp_level_name_2 = const_int_0;
    frame_182f4aa45d9b70182049fb0f520cca80->m_frame.f_lineno = 2;
    tmp_assign_source_5 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pieces$pawn, (Nuitka_StringObject *)const_str_plain_board, tmp_assign_source_5 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_pieces$pawn, (Nuitka_StringObject *)const_str_plain_Piece );

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
    tmp_tuple_element_2 = const_str_plain_Pawn;
    tmp_args_name_1 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_tuple_element_2 );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_2 );
    tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_1 );
    frame_182f4aa45d9b70182049fb0f520cca80->m_frame.f_lineno = 4;
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
    locals_pieces$pawn_4 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_a307e03fca7b5252a158fc901bf452e9;
    tmp_res = PyObject_SetItem( locals_pieces$pawn_4, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;

        goto try_except_handler_3;
    }
    tmp_dictset_value = const_str_plain_Pawn;
    tmp_res = PyObject_SetItem( locals_pieces$pawn_4, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;

        goto try_except_handler_3;
    }
    MAKE_OR_REUSE_FRAME( cache_frame_7c4c1c0f778d5e3d5f7f17bc267efd4c_2, codeobj_7c4c1c0f778d5e3d5f7f17bc267efd4c, module_pieces$pawn, sizeof(void *) );
    frame_7c4c1c0f778d5e3d5f7f17bc267efd4c_2 = cache_frame_7c4c1c0f778d5e3d5f7f17bc267efd4c_2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_7c4c1c0f778d5e3d5f7f17bc267efd4c_2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_7c4c1c0f778d5e3d5f7f17bc267efd4c_2 ) == 2 ); // Frame stack

    // Framed code:
    tmp_dictset_value = MAKE_FUNCTION_pieces$pawn$$$function_1___init__(  );
    tmp_res = PyObject_SetItem( locals_pieces$pawn_4, const_str_plain___init__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_dictset_value = MAKE_FUNCTION_pieces$pawn$$$function_2___str__(  );
    tmp_res = PyObject_SetItem( locals_pieces$pawn_4, const_str_plain___str__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_dictset_value = MAKE_FUNCTION_pieces$pawn$$$function_3_scan(  );
    tmp_res = PyObject_SetItem( locals_pieces$pawn_4, const_str_plain_scan, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7c4c1c0f778d5e3d5f7f17bc267efd4c_2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7c4c1c0f778d5e3d5f7f17bc267efd4c_2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_7c4c1c0f778d5e3d5f7f17bc267efd4c_2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_7c4c1c0f778d5e3d5f7f17bc267efd4c_2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_7c4c1c0f778d5e3d5f7f17bc267efd4c_2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_7c4c1c0f778d5e3d5f7f17bc267efd4c_2,
        type_description_2,
        NULL
    );


    // Release cached frame.
    if ( frame_7c4c1c0f778d5e3d5f7f17bc267efd4c_2 == cache_frame_7c4c1c0f778d5e3d5f7f17bc267efd4c_2 )
    {
        Py_DECREF( frame_7c4c1c0f778d5e3d5f7f17bc267efd4c_2 );
    }
    cache_frame_7c4c1c0f778d5e3d5f7f17bc267efd4c_2 = NULL;

    assertFrameObject( frame_7c4c1c0f778d5e3d5f7f17bc267efd4c_2 );

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
    tmp_res = PyObject_SetItem( locals_pieces$pawn_4, const_str_plain___orig_bases__, tmp_dictset_value );
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
    tmp_tuple_element_3 = const_str_plain_Pawn;
    tmp_args_name_2 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_3 );
    tmp_tuple_element_3 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_tuple_element_3 );
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_3 );
    tmp_tuple_element_3 = locals_pieces$pawn_4;
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_3 );
    tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_2 );
    frame_182f4aa45d9b70182049fb0f520cca80->m_frame.f_lineno = 4;
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
    NUITKA_CANNOT_GET_HERE( pieces$pawn );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_3:;
    Py_DECREF( locals_pieces$pawn_4 );
    locals_pieces$pawn_4 = NULL;
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

    Py_DECREF( locals_pieces$pawn_4 );
    locals_pieces$pawn_4 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pieces$pawn );
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
    NUITKA_CANNOT_GET_HERE( pieces$pawn );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_1:;
    exception_lineno = 4;
    goto try_except_handler_1;
    outline_result_1:;
    tmp_assign_source_11 = tmp_outline_return_value_1;
    UPDATE_STRING_DICT1( moduledict_pieces$pawn, (Nuitka_StringObject *)const_str_plain_Pawn, tmp_assign_source_11 );
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
    RESTORE_FRAME_EXCEPTION( frame_182f4aa45d9b70182049fb0f520cca80 );
#endif
    popFrameStack();

    assertFrameObject( frame_182f4aa45d9b70182049fb0f520cca80 );

    goto frame_no_exception_2;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_182f4aa45d9b70182049fb0f520cca80 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_182f4aa45d9b70182049fb0f520cca80, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_182f4aa45d9b70182049fb0f520cca80->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_182f4aa45d9b70182049fb0f520cca80, exception_lineno );
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


    return MOD_RETURN_VALUE( module_pieces$pawn );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
