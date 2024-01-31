@class NSString, KVItemBuilder;

@interface KMMapper_SAAppInfo : NSObject <KMMapper> {
    KVItemBuilder *_builder;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)externalObjectClass;

@end
