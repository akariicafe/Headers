@class NSArray, NSString, HDFHIRResourceObject, NSMutableArray;

@interface HDFHIRExtensionProcessor : NSObject <HKJSONVisitorDelegate>

@property (retain, nonatomic) NSArray *collectedUnsupportedModifierExtensions;
@property (retain, nonatomic) NSMutableArray *collectingUnsupportedModifierExtensions;
@property (readonly, copy, nonatomic) HDFHIRResourceObject *resource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)extensionsForURL:(id)a0 inJSONDictionary:(id)a1 error:(id *)a2;
+ (BOOL)isSupportedModifierExtension:(id)a0;

- (id)init;
- (id)initWithResource:(id)a0;
- (void).cxx_destruct;
- (long long)visitor:(id)a0 willVisitArray:(id)a1;
- (id)findUnsupportedModifierExtensions:(id *)a0;

@end
