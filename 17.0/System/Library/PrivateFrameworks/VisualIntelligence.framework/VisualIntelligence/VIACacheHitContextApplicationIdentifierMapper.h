@class NSString;

@interface VIACacheHitContextApplicationIdentifierMapper : NSObject <VIACacheHitContextMapping>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)updateBuilder:(id)a0 withDictionary:(id)a1;

@end
