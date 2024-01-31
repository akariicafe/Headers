@class NSHTTPURLResponse, NSDictionary, NSString, NSNumber;

@interface SSAuthenticationResponse : NSObject {
    NSHTTPURLResponse *_urlResponse;
}

@property long long URLBagType;
@property (readonly) NSDictionary *responseDictionary;
@property (readonly) NSHTTPURLResponse *URLResponse;
@property (readonly) NSString *accountName;
@property (readonly) long long accountKind;
@property (readonly) NSNumber *accountUniqueIdentifier;
@property (readonly) long long availableServiceTypes;
@property (readonly) NSString *creditsString;
@property (readonly) long long enabledServiceTypes;
@property (readonly, getter=isManagedStudent) BOOL managedStudent;
@property (readonly, getter=isNewCustomer) BOOL newCustomer;
@property (readonly) NSString *storeFrontIdentifier;
@property (readonly) NSString *token;
@property (readonly) NSNumber *failureType;
@property (readonly) long long responseType;
@property (readonly) NSString *userMessage;

- (id)altDSID;
- (void).cxx_destruct;
- (id)initWithURLResponse:(id)a0 dictionary:(id)a1;
- (long long)_responseTypeForErrorNumber:(long long)a0;
- (long long)_responseTypeForFailureType:(long long)a0;
- (long long)_responseTypeForStatusValue:(long long)a0;
- (id)_valueForFirstAvailableKey:(id)a0;
- (id)newAccount;

@end
