// Copyright (c) 2013 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//

#include "libcef_dll/cpptoc/drag_handler_cpptoc.h"
#include "libcef_dll/ctocpp/browser_ctocpp.h"
#include "libcef_dll/ctocpp/drag_data_ctocpp.h"


// MEMBER FUNCTIONS - Body may be edited by hand.

int CEF_CALLBACK drag_handler_on_drag_enter(struct _cef_drag_handler_t* self,
    cef_browser_t* browser, cef_drag_data_t* dragData,
    enum cef_drag_operations_mask_t mask) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;
  // Verify param: browser; type: refptr_diff
  DCHECK(browser);
  if (!browser)
    return 0;
  // Verify param: dragData; type: refptr_diff
  DCHECK(dragData);
  if (!dragData)
    return 0;

  // Execute
 
  bool _retval = CefDragHandlerCppToC::Get(self)->OnDragEnter(
      CefBrowserCToCpp::Wrap(browser),
      CefDragDataCToCpp::Wrap(dragData),
      mask);

  // Return type: bool
  //return _retval;
  return true;
}


// CONSTRUCTOR - Do not edit by hand.

CefDragHandlerCppToC::CefDragHandlerCppToC(CefDragHandler* cls)
    : CefCppToC<CefDragHandlerCppToC, CefDragHandler, cef_drag_handler_t>(cls) {
  struct_.struct_.on_drag_enter = drag_handler_on_drag_enter;
}

#ifndef NDEBUG
template<> long CefCppToC<CefDragHandlerCppToC, CefDragHandler,
    cef_drag_handler_t>::DebugObjCt = 0;
#endif

