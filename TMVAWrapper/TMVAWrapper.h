/*****************************************************************************
 * Project: RooFit                                                           *
 *                                                                           *
  * This code was autogenerated by RooClassFactory                            * 
 *****************************************************************************/

#ifndef TMVAWRAPPER
#define TMVAWRAPPER

#include "RooAbsReal.h"
#include "RooRealProxy.h"
#include "RooCategoryProxy.h"
#include "RooAbsReal.h"
#include "RooAbsCategory.h"

#if not defined(__CINT__) || defined(__MAKECINT__)
#include "TMVA/Tools.h"
#include "TMVA/Reader.h"
#endif


/*namespace TMVA {
    class Reader;
}
*/

class TMVAWrapper : public RooAbsReal {
public:
  TMVAWrapper() {} ; 
  TMVAWrapper(const char *name, const char *title,
	      RooAbsReal& _features);
  TMVAWrapper(const TMVAWrapper& other, const char* name=0) ;
  virtual TObject* clone(const char* newname) const { return new TMVAWrapper(*this,newname); }
  inline virtual ~TMVAWrapper() { }


protected:

  RooRealProxy features ;
  
  Double_t evaluate() const ;

private:

  TMVA::Reader *reader ;
  mutable Float_t x;
  Float_t alpha;
  Float_t target;

  ClassDef(TMVAWrapper,1) // Your description goes here...
};
 
#endif
