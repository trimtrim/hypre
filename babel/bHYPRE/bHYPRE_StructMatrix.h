/*
 * File:          bHYPRE_StructMatrix.h
 * Symbol:        bHYPRE.StructMatrix-v1.0.0
 * Symbol Type:   class
 * Babel Version: 0.9.8
 * Description:   Client-side glue code for bHYPRE.StructMatrix
 * 
 * WARNING: Automatically generated; changes will be lost
 * 
 * babel-version = 0.9.8
 */

#ifndef included_bHYPRE_StructMatrix_h
#define included_bHYPRE_StructMatrix_h

/**
 * Symbol "bHYPRE.StructMatrix" (version 1.0.0)
 * 
 * A single class that implements both a build interface and an
 * operator interface. It returns itself for GetConstructedObject.
 * A StructMatrix is a matrix on a structured grid.
 * One function unique to a StructMatrix is SetConstantEntries.
 * This declares that matrix entries corresponding to certain stencil points
 * (supplied as stencil element indices) will be constant throughout the grid.
 * 
 */
struct bHYPRE_StructMatrix__object;
struct bHYPRE_StructMatrix__array;
typedef struct bHYPRE_StructMatrix__object* bHYPRE_StructMatrix;

/*
 * Includes for all header dependencies.
 */

#ifndef included_sidl_header_h
#include "sidl_header.h"
#endif
#ifndef included_bHYPRE_StructGrid_h
#include "bHYPRE_StructGrid.h"
#endif
#ifndef included_bHYPRE_StructStencil_h
#include "bHYPRE_StructStencil.h"
#endif
#ifndef included_bHYPRE_Vector_h
#include "bHYPRE_Vector.h"
#endif
#ifndef included_sidl_BaseInterface_h
#include "sidl_BaseInterface.h"
#endif
#ifndef included_sidl_ClassInfo_h
#include "sidl_ClassInfo.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif

/**
 * Constructor function for the class.
 */
bHYPRE_StructMatrix
bHYPRE_StructMatrix__create(void);

void
bHYPRE_StructMatrix_addRef(
  /*in*/ bHYPRE_StructMatrix self);

void
bHYPRE_StructMatrix_deleteRef(
  /*in*/ bHYPRE_StructMatrix self);

sidl_bool
bHYPRE_StructMatrix_isSame(
  /*in*/ bHYPRE_StructMatrix self,
  /*in*/ sidl_BaseInterface iobj);

sidl_BaseInterface
bHYPRE_StructMatrix_queryInt(
  /*in*/ bHYPRE_StructMatrix self,
  /*in*/ const char* name);

sidl_bool
bHYPRE_StructMatrix_isType(
  /*in*/ bHYPRE_StructMatrix self,
  /*in*/ const char* name);

sidl_ClassInfo
bHYPRE_StructMatrix_getClassInfo(
  /*in*/ bHYPRE_StructMatrix self);

/**
 * Set the MPI Communicator.
 * 
 */
int32_t
bHYPRE_StructMatrix_SetCommunicator(
  /*in*/ bHYPRE_StructMatrix self,
  /*in*/ void* mpi_comm);

/**
 * Set the int parameter associated with {\tt name}.
 * 
 */
int32_t
bHYPRE_StructMatrix_SetIntParameter(
  /*in*/ bHYPRE_StructMatrix self,
  /*in*/ const char* name,
  /*in*/ int32_t value);

/**
 * Set the double parameter associated with {\tt name}.
 * 
 */
int32_t
bHYPRE_StructMatrix_SetDoubleParameter(
  /*in*/ bHYPRE_StructMatrix self,
  /*in*/ const char* name,
  /*in*/ double value);

/**
 * Set the string parameter associated with {\tt name}.
 * 
 */
int32_t
bHYPRE_StructMatrix_SetStringParameter(
  /*in*/ bHYPRE_StructMatrix self,
  /*in*/ const char* name,
  /*in*/ const char* value);

/**
 * Set the int 1-D array parameter associated with {\tt name}.
 * 
 */
int32_t
bHYPRE_StructMatrix_SetIntArray1Parameter(
  /*in*/ bHYPRE_StructMatrix self,
  /*in*/ const char* name,
  /*in*/ struct sidl_int__array* value);

/**
 * Set the int 2-D array parameter associated with {\tt name}.
 * 
 */
int32_t
bHYPRE_StructMatrix_SetIntArray2Parameter(
  /*in*/ bHYPRE_StructMatrix self,
  /*in*/ const char* name,
  /*in*/ struct sidl_int__array* value);

/**
 * Set the double 1-D array parameter associated with {\tt name}.
 * 
 */
int32_t
bHYPRE_StructMatrix_SetDoubleArray1Parameter(
  /*in*/ bHYPRE_StructMatrix self,
  /*in*/ const char* name,
  /*in*/ struct sidl_double__array* value);

/**
 * Set the double 2-D array parameter associated with {\tt name}.
 * 
 */
int32_t
bHYPRE_StructMatrix_SetDoubleArray2Parameter(
  /*in*/ bHYPRE_StructMatrix self,
  /*in*/ const char* name,
  /*in*/ struct sidl_double__array* value);

/**
 * Set the int parameter associated with {\tt name}.
 * 
 */
int32_t
bHYPRE_StructMatrix_GetIntValue(
  /*in*/ bHYPRE_StructMatrix self,
  /*in*/ const char* name,
  /*out*/ int32_t* value);

/**
 * Get the double parameter associated with {\tt name}.
 * 
 */
int32_t
bHYPRE_StructMatrix_GetDoubleValue(
  /*in*/ bHYPRE_StructMatrix self,
  /*in*/ const char* name,
  /*out*/ double* value);

/**
 * (Optional) Do any preprocessing that may be necessary in
 * order to execute {\tt Apply}.
 * 
 */
int32_t
bHYPRE_StructMatrix_Setup(
  /*in*/ bHYPRE_StructMatrix self,
  /*in*/ bHYPRE_Vector b,
  /*in*/ bHYPRE_Vector x);

/**
 * Apply the operator to {\tt b}, returning {\tt x}.
 * 
 */
int32_t
bHYPRE_StructMatrix_Apply(
  /*in*/ bHYPRE_StructMatrix self,
  /*in*/ bHYPRE_Vector b,
  /*inout*/ bHYPRE_Vector* x);

/**
 * Prepare an object for setting coefficient values, whether for
 * the first time or subsequently.
 * 
 */
int32_t
bHYPRE_StructMatrix_Initialize(
  /*in*/ bHYPRE_StructMatrix self);

/**
 * Finalize the construction of an object before using, either
 * for the first time or on subsequent uses. {\tt Initialize}
 * and {\tt Assemble} always appear in a matched set, with
 * Initialize preceding Assemble. Values can only be set in
 * between a call to Initialize and Assemble.
 * 
 */
int32_t
bHYPRE_StructMatrix_Assemble(
  /*in*/ bHYPRE_StructMatrix self);

/**
 * The problem definition interface is a {\it builder} that
 * creates an object that contains the problem definition
 * information, e.g. a matrix. To perform subsequent operations
 * with that object, it must be returned from the problem
 * definition object. {\tt GetObject} performs this function.
 * At compile time, the type of the returned object is unknown.
 * Thus, the returned type is a sidl.BaseInterface.
 * QueryInterface or Cast must be used on the returned object to
 * convert it into a known type.
 * 
 */
int32_t
bHYPRE_StructMatrix_GetObject(
  /*in*/ bHYPRE_StructMatrix self,
  /*out*/ sidl_BaseInterface* A);

/**
 * Method:  SetGrid[]
 */
int32_t
bHYPRE_StructMatrix_SetGrid(
  /*in*/ bHYPRE_StructMatrix self,
  /*in*/ bHYPRE_StructGrid grid);

/**
 * Method:  SetStencil[]
 */
int32_t
bHYPRE_StructMatrix_SetStencil(
  /*in*/ bHYPRE_StructMatrix self,
  /*in*/ bHYPRE_StructStencil stencil);

/**
 * Method:  SetValues[]
 */
int32_t
bHYPRE_StructMatrix_SetValues(
  /*in*/ bHYPRE_StructMatrix self,
  /*in*/ struct sidl_int__array* index,
  /*in*/ int32_t num_stencil_indices,
  /*in*/ struct sidl_int__array* stencil_indices,
  /*in*/ struct sidl_double__array* values);

/**
 * Method:  SetBoxValues[]
 */
int32_t
bHYPRE_StructMatrix_SetBoxValues(
  /*in*/ bHYPRE_StructMatrix self,
  /*in*/ struct sidl_int__array* ilower,
  /*in*/ struct sidl_int__array* iupper,
  /*in*/ int32_t num_stencil_indices,
  /*in*/ struct sidl_int__array* stencil_indices,
  /*in*/ struct sidl_double__array* values);

/**
 * Method:  SetNumGhost[]
 */
int32_t
bHYPRE_StructMatrix_SetNumGhost(
  /*in*/ bHYPRE_StructMatrix self,
  /*in*/ struct sidl_int__array* num_ghost);

/**
 * Method:  SetSymmetric[]
 */
int32_t
bHYPRE_StructMatrix_SetSymmetric(
  /*in*/ bHYPRE_StructMatrix self,
  /*in*/ int32_t symmetric);

/**
 * Method:  SetConstantEntries[]
 */
int32_t
bHYPRE_StructMatrix_SetConstantEntries(
  /*in*/ bHYPRE_StructMatrix self,
  /*in*/ int32_t num_stencil_constant_points,
  /*in*/ struct sidl_int__array* stencil_constant_points);

/**
 * Method:  SetConstantValues[]
 */
int32_t
bHYPRE_StructMatrix_SetConstantValues(
  /*in*/ bHYPRE_StructMatrix self,
  /*in*/ int32_t num_stencil_indices,
  /*in*/ struct sidl_int__array* stencil_indices,
  /*in*/ struct sidl_double__array* values);

/**
 * Cast method for interface and class type conversions.
 */
bHYPRE_StructMatrix
bHYPRE_StructMatrix__cast(
  void* obj);

/**
 * String cast method for interface and class type conversions.
 */
void*
bHYPRE_StructMatrix__cast2(
  void* obj,
  const char* type);

struct bHYPRE_StructMatrix__array*
bHYPRE_StructMatrix__array_createCol(
  int32_t       dimen,
  const int32_t lower[],
  const int32_t upper[]);

struct bHYPRE_StructMatrix__array*
bHYPRE_StructMatrix__array_createRow(
  int32_t       dimen,
  const int32_t lower[],
  const int32_t upper[]);

struct bHYPRE_StructMatrix__array*
bHYPRE_StructMatrix__array_create1d(int32_t len);

struct bHYPRE_StructMatrix__array*
bHYPRE_StructMatrix__array_create1dInit(
  int32_t len, 
  bHYPRE_StructMatrix* data);

struct bHYPRE_StructMatrix__array*
bHYPRE_StructMatrix__array_create2dCol(int32_t m, int32_t n);

struct bHYPRE_StructMatrix__array*
bHYPRE_StructMatrix__array_create2dRow(int32_t m, int32_t n);

struct bHYPRE_StructMatrix__array*
bHYPRE_StructMatrix__array_borrow(
  bHYPRE_StructMatrix* firstElement,
  int32_t       dimen,
  const int32_t lower[],
  const int32_t upper[],
  const int32_t stride[]);

struct bHYPRE_StructMatrix__array*
bHYPRE_StructMatrix__array_smartCopy(
  struct bHYPRE_StructMatrix__array *array);

void
bHYPRE_StructMatrix__array_addRef(
  struct bHYPRE_StructMatrix__array* array);

void
bHYPRE_StructMatrix__array_deleteRef(
  struct bHYPRE_StructMatrix__array* array);

bHYPRE_StructMatrix
bHYPRE_StructMatrix__array_get1(
  const struct bHYPRE_StructMatrix__array* array,
  const int32_t i1);

bHYPRE_StructMatrix
bHYPRE_StructMatrix__array_get2(
  const struct bHYPRE_StructMatrix__array* array,
  const int32_t i1,
  const int32_t i2);

bHYPRE_StructMatrix
bHYPRE_StructMatrix__array_get3(
  const struct bHYPRE_StructMatrix__array* array,
  const int32_t i1,
  const int32_t i2,
  const int32_t i3);

bHYPRE_StructMatrix
bHYPRE_StructMatrix__array_get4(
  const struct bHYPRE_StructMatrix__array* array,
  const int32_t i1,
  const int32_t i2,
  const int32_t i3,
  const int32_t i4);

bHYPRE_StructMatrix
bHYPRE_StructMatrix__array_get5(
  const struct bHYPRE_StructMatrix__array* array,
  const int32_t i1,
  const int32_t i2,
  const int32_t i3,
  const int32_t i4,
  const int32_t i5);

bHYPRE_StructMatrix
bHYPRE_StructMatrix__array_get6(
  const struct bHYPRE_StructMatrix__array* array,
  const int32_t i1,
  const int32_t i2,
  const int32_t i3,
  const int32_t i4,
  const int32_t i5,
  const int32_t i6);

bHYPRE_StructMatrix
bHYPRE_StructMatrix__array_get7(
  const struct bHYPRE_StructMatrix__array* array,
  const int32_t i1,
  const int32_t i2,
  const int32_t i3,
  const int32_t i4,
  const int32_t i5,
  const int32_t i6,
  const int32_t i7);

bHYPRE_StructMatrix
bHYPRE_StructMatrix__array_get(
  const struct bHYPRE_StructMatrix__array* array,
  const int32_t indices[]);

void
bHYPRE_StructMatrix__array_set1(
  struct bHYPRE_StructMatrix__array* array,
  const int32_t i1,
  bHYPRE_StructMatrix const value);

void
bHYPRE_StructMatrix__array_set2(
  struct bHYPRE_StructMatrix__array* array,
  const int32_t i1,
  const int32_t i2,
  bHYPRE_StructMatrix const value);

void
bHYPRE_StructMatrix__array_set3(
  struct bHYPRE_StructMatrix__array* array,
  const int32_t i1,
  const int32_t i2,
  const int32_t i3,
  bHYPRE_StructMatrix const value);

void
bHYPRE_StructMatrix__array_set4(
  struct bHYPRE_StructMatrix__array* array,
  const int32_t i1,
  const int32_t i2,
  const int32_t i3,
  const int32_t i4,
  bHYPRE_StructMatrix const value);

void
bHYPRE_StructMatrix__array_set5(
  struct bHYPRE_StructMatrix__array* array,
  const int32_t i1,
  const int32_t i2,
  const int32_t i3,
  const int32_t i4,
  const int32_t i5,
  bHYPRE_StructMatrix const value);

void
bHYPRE_StructMatrix__array_set6(
  struct bHYPRE_StructMatrix__array* array,
  const int32_t i1,
  const int32_t i2,
  const int32_t i3,
  const int32_t i4,
  const int32_t i5,
  const int32_t i6,
  bHYPRE_StructMatrix const value);

void
bHYPRE_StructMatrix__array_set7(
  struct bHYPRE_StructMatrix__array* array,
  const int32_t i1,
  const int32_t i2,
  const int32_t i3,
  const int32_t i4,
  const int32_t i5,
  const int32_t i6,
  const int32_t i7,
  bHYPRE_StructMatrix const value);

void
bHYPRE_StructMatrix__array_set(
  struct bHYPRE_StructMatrix__array* array,
  const int32_t indices[],
  bHYPRE_StructMatrix const value);

int32_t
bHYPRE_StructMatrix__array_dimen(
  const struct bHYPRE_StructMatrix__array* array);

int32_t
bHYPRE_StructMatrix__array_lower(
  const struct bHYPRE_StructMatrix__array* array,
  const int32_t ind);

int32_t
bHYPRE_StructMatrix__array_upper(
  const struct bHYPRE_StructMatrix__array* array,
  const int32_t ind);

int32_t
bHYPRE_StructMatrix__array_length(
  const struct bHYPRE_StructMatrix__array* array,
  const int32_t ind);

int32_t
bHYPRE_StructMatrix__array_stride(
  const struct bHYPRE_StructMatrix__array* array,
  const int32_t ind);

int
bHYPRE_StructMatrix__array_isColumnOrder(
  const struct bHYPRE_StructMatrix__array* array);

int
bHYPRE_StructMatrix__array_isRowOrder(
  const struct bHYPRE_StructMatrix__array* array);

struct bHYPRE_StructMatrix__array*
bHYPRE_StructMatrix__array_slice(
  struct bHYPRE_StructMatrix__array* src,
  int32_t        dimen,
  const int32_t  numElem[],
  const int32_t  *srcStart,
  const int32_t  *srcStride,
  const int32_t  *newStart);

void
bHYPRE_StructMatrix__array_copy(
  const struct bHYPRE_StructMatrix__array* src,
  struct bHYPRE_StructMatrix__array* dest);

struct bHYPRE_StructMatrix__array*
bHYPRE_StructMatrix__array_ensure(
  struct bHYPRE_StructMatrix__array* src,
  int32_t dimen,
  int     ordering);

#ifdef __cplusplus
}
#endif
#endif
