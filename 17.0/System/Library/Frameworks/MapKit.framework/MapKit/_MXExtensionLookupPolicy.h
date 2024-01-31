@class NSPredicate, NSString;

@interface _MXExtensionLookupPolicy : NSObject <_MXExtensionLookupPolicy>

@property (retain, nonatomic) NSPredicate *extensionPredicate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPredicate:(id)a0;
- (void).cxx_destruct;

@end
