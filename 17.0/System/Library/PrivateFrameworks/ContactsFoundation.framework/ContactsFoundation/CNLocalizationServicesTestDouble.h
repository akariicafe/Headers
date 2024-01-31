@class NSString, NSMutableDictionary;

@interface CNLocalizationServicesTestDouble : NSObject <CNLocalizationServices> {
    NSMutableDictionary *_values;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)storageKeyForKey:(id)a0 table:(id)a1 inBundleForClass:(Class)a2;

@end
