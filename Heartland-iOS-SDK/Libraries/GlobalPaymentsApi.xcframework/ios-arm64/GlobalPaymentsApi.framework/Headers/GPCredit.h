#ifndef GPCredit_h
#define GPCredit_h

#import <Foundation/Foundation.h>
#import <GlobalPaymentsApi/GPEnums.h>
#import <GlobalPaymentsApi/GPPaymentMethod.h>
#import <GlobalPaymentsApi/GPAuthorizationBuilder.h>
#import <GlobalPaymentsApi/GPSurchargeEligibilityLookupBuilder.h>
#import <GlobalPaymentsApi/GPManagementBuilder.h>

@interface GPCredit : GPPaymentMethod

- (GPAuthorizationBuilder*) authorize;
- (GPAuthorizationBuilder*) charge;
- (GPAuthorizationBuilder*) refund;
- (GPAuthorizationBuilder*) verify;
- (GPSurchargeEligibilityLookupBuilder*) surcharge;
- (GPManagementBuilder*) edit;

@end

#endif /* GPCredit_h */
