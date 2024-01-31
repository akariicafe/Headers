@class NSString, KVItemBuilder, NSNumber;

@interface KMMapper_PortraitEntity : NSObject <KMMapper> {
    KVItemBuilder *_builder;
    NSNumber *_alternativeItemIdKey;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)externalObjectClass;

@end
