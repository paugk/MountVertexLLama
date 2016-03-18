// -*- C++ -*-
// $Id$

/**
 * Code generated by the The ACE ORB (TAO) IDL Compiler v1.8.1
 * TAO and the TAO IDL Compiler have been developed by:
 *       Center for Distributed Object Computing
 *       Washington University
 *       St. Louis, MO
 *       USA
 *       http://www.cs.wustl.edu/~schmidt/doc-center.html
 * and
 *       Distributed Object Computing Laboratory
 *       University of California at Irvine
 *       Irvine, CA
 *       USA
 * and
 *       Institute for Software Integrated Systems
 *       Vanderbilt University
 *       Nashville, TN
 *       USA
 *       http://www.isis.vanderbilt.edu/
 *
 * Information about TAO is available at:
 *     http://www.cs.wustl.edu/~schmidt/TAO.html
 **/

// TAO_IDL - Generated from
// be/be_codegen.cpp:149

#ifndef _TAO_IDL__TMP__MOUNTVERTEXLLAMACOMPSIMBASEC_H_
#define _TAO_IDL__TMP__MOUNTVERTEXLLAMACOMPSIMBASEC_H_


#include /**/ "ace/config-all.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */


#include "tao/AnyTypeCode/AnyTypeCode_methods.h"
#include "tao/ORB.h"
#include "tao/SystemException.h"
#include "tao/Basic_Types.h"
#include "tao/ORB_Constants.h"
#include "tao/Object.h"
#include "tao/AnyTypeCode/TypeCode.h"
#include "tao/AnyTypeCode/TypeCode_Constants.h"
#include "tao/String_Manager_T.h"
#include "tao/Objref_VarOut_T.h"
#include /**/ "tao/Versioned_Namespace.h"

#include "MountVertexLLamaC.h"

#if defined (TAO_EXPORT_MACRO)
#undef TAO_EXPORT_MACRO
#endif
#define TAO_EXPORT_MACRO 

// TAO_IDL - Generated from 
// be/be_visitor_root/root_ch.cpp:151
TAO_BEGIN_VERSIONED_NAMESPACE_DECL



namespace TAO
{
  class Collocation_Proxy_Broker;
  template<typename T> class Narrow_Utils;
}
TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_module/module_ch.cpp:41

namespace Control
{
  
  // TAO_IDL - Generated from
  // be/be_interface.cpp:785

#if !defined (_CONTROL_MOUNTVERTEXLLAMACOMPSIMBASE__VAR_OUT_CH_)
#define _CONTROL_MOUNTVERTEXLLAMACOMPSIMBASE__VAR_OUT_CH_
  
  class MountVertexLLamaCompSimBase;
  typedef MountVertexLLamaCompSimBase *MountVertexLLamaCompSimBase_ptr;
  
  typedef
    TAO_Objref_Var_T<
        MountVertexLLamaCompSimBase
      >
    MountVertexLLamaCompSimBase_var;
  
  typedef
    TAO_Objref_Out_T<
        MountVertexLLamaCompSimBase
      >
    MountVertexLLamaCompSimBase_out;

#endif /* end #if !defined */
  
  // TAO_IDL - Generated from
  // be/be_visitor_interface/interface_ch.cpp:45
  
  class  MountVertexLLamaCompSimBase
    : public virtual ::Control::MountVertexLLama
  {
  public:
    friend class TAO::Narrow_Utils<MountVertexLLamaCompSimBase>;
    typedef MountVertexLLamaCompSimBase_ptr _ptr_type;
    typedef MountVertexLLamaCompSimBase_var _var_type;
    typedef MountVertexLLamaCompSimBase_out _out_type;
    
    // The static operations.
    static MountVertexLLamaCompSimBase_ptr _duplicate (MountVertexLLamaCompSimBase_ptr obj);
    
    static void _tao_release (MountVertexLLamaCompSimBase_ptr obj);
    
    static MountVertexLLamaCompSimBase_ptr _narrow (::CORBA::Object_ptr obj);
    static MountVertexLLamaCompSimBase_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static MountVertexLLamaCompSimBase_ptr _nil (void)
    {
      return static_cast<MountVertexLLamaCompSimBase_ptr> (0);
    }
    
    static void _tao_any_destructor (void *);
    
    // TAO_IDL - Generated from
    // be/be_visitor_operation/operation_ch.cpp:36
    
    virtual void
    setSimValue (
      ::CORBA::Long rca,
      const ::Control::LongSeq & data);
    
    // TAO_IDL - Generated from
    // be/be_visitor_operation/operation_ch.cpp:36
    
    virtual ::Control::LongSeq *
    getSimValue (
      ::CORBA::Long rca);
    
    // TAO_IDL - Generated from
    // be/be_visitor_interface/interface_ch.cpp:204
    
    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id (void) const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
  private:
    TAO::Collocation_Proxy_Broker *the_TAO_MountVertexLLamaCompSimBase_Proxy_Broker_;
  
  protected:
    // Concrete interface only.
    MountVertexLLamaCompSimBase (void);
    
    // These methods traverse the inheritance tree and set the
    // parents piece of the given class in the right mode.
    virtual void Control_MountVertexLLamaCompSimBase_setup_collocation (void);
    
    // Concrete non-local interface only.
    MountVertexLLamaCompSimBase (
        ::IOP::IOR *ior,
        TAO_ORB_Core *orb_core);
    
    // Non-local interface only.
    MountVertexLLamaCompSimBase (
        TAO_Stub *objref,
        ::CORBA::Boolean _tao_collocated = false,
        TAO_Abstract_ServantBase *servant = 0,
        TAO_ORB_Core *orb_core = 0);
    
    virtual ~MountVertexLLamaCompSimBase (void);
  
  private:
    // Private and unimplemented for concrete interfaces.
    MountVertexLLamaCompSimBase (const MountVertexLLamaCompSimBase &);
    
    void operator= (const MountVertexLLamaCompSimBase &);
  };
  
  // TAO_IDL - Generated from
  // be/be_visitor_typecode/typecode_decl.cpp:39
  
  extern  ::CORBA::TypeCode_ptr const _tc_MountVertexLLamaCompSimBase;

// TAO_IDL - Generated from
// be/be_visitor_module/module_ch.cpp:70

} // module Control

// Proxy Broker Factory function pointer declarations.

// TAO_IDL - Generated from
// be/be_visitor_root/root_ch.cpp:193

extern 
TAO::Collocation_Proxy_Broker *
(*Control__TAO_MountVertexLLamaCompSimBase_Proxy_Broker_Factory_function_pointer) (
    ::CORBA::Object_ptr obj);

// TAO_IDL - Generated from
// be/be_visitor_traits.cpp:60

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

// Traits specializations.
namespace TAO
{

#if !defined (_CONTROL_MOUNTVERTEXLLAMACOMPSIMBASE__TRAITS_)
#define _CONTROL_MOUNTVERTEXLLAMACOMPSIMBASE__TRAITS_
  
  template<>
  struct  Objref_Traits< ::Control::MountVertexLLamaCompSimBase>
  {
    static ::Control::MountVertexLLamaCompSimBase_ptr duplicate (
        ::Control::MountVertexLLamaCompSimBase_ptr p);
    static void release (
        ::Control::MountVertexLLamaCompSimBase_ptr p);
    static ::Control::MountVertexLLamaCompSimBase_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::Control::MountVertexLLamaCompSimBase_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */
}
TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_interface/any_op_ch.cpp:45



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace Control
{
   void operator<<= ( ::CORBA::Any &, MountVertexLLamaCompSimBase_ptr); // copying
   void operator<<= ( ::CORBA::Any &, MountVertexLLamaCompSimBase_ptr *); // non-copying
   ::CORBA::Boolean operator>>= (const ::CORBA::Any &, MountVertexLLamaCompSimBase_ptr &);
}

#else


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 void operator<<= (::CORBA::Any &, Control::MountVertexLLamaCompSimBase_ptr); // copying
 void operator<<= (::CORBA::Any &, Control::MountVertexLLamaCompSimBase_ptr *); // non-copying
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, Control::MountVertexLLamaCompSimBase_ptr &);
TAO_END_VERSIONED_NAMESPACE_DECL



#endif

// TAO_IDL - Generated from
// be/be_visitor_interface/cdr_op_ch.cpp:46

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 ::CORBA::Boolean operator<< (TAO_OutputCDR &, const Control::MountVertexLLamaCompSimBase_ptr );
 ::CORBA::Boolean operator>> (TAO_InputCDR &, Control::MountVertexLLamaCompSimBase_ptr &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_codegen.cpp:1786
#if defined (__ACE_INLINE__)
#include "MountVertexLLamaCompSimBaseC.inl"
#endif /* defined INLINE */

#endif /* ifndef */

