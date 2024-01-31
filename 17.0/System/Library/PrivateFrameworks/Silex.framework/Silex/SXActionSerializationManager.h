@class NSString, NSMutableDictionary;

@interface SXActionSerializationManager : NSObject <SXActionSerializer, SXActionSerializationManager>

@property (readonly, nonatomic) NSMutableDictionary *serializers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
