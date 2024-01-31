@class NSString, NSDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface MIUserManagement : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *internalQueue;
@property (nonatomic) unsigned long long personaGenerationIdentifier;
@property (retain, nonatomic) NSString *systemPersonaUniqueString;
@property (copy, nonatomic) NSString *enterprisePersonaUniqueString;
@property (copy, nonatomic) NSString *primaryPersonaUniqueString;
@property (retain, nonatomic) NSDictionary *personaAttributesMap;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (BOOL)_onQueue_refreshPersonaInformationWithError:(id *)a0;
- (BOOL)isKnownPersonaUniqueString:(id)a0 error:(id *)a1;
- (id)multiPersonaSADAppBundleIDsWithError:(id *)a0;
- (id)personaForBundleID:(id)a0 error:(id *)a1;
- (unsigned long long)personaTypeForPersonaUniqueString:(id)a0;

@end
