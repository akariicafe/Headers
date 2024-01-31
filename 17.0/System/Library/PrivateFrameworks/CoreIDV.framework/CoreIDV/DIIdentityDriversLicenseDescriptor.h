@class NSArray, NSMutableDictionary, NSString;

@interface DIIdentityDriversLicenseDescriptor : NSObject <DIIdentityDocumentDescriptor>

@property (readonly, nonatomic) NSMutableDictionary *elementsToIntentToStore;
@property (readonly, nonatomic) NSArray *elements;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
