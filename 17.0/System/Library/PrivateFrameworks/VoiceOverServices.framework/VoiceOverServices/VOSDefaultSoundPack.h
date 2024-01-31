@class NSDictionary, NSString;

@interface VOSDefaultSoundPack : NSObject <VOSSoundPack>

@property (readonly, nonatomic) NSDictionary *eventToSoundFilenameMapping;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)soundAssetURLForOutputEvent:(id)a0;

@end
