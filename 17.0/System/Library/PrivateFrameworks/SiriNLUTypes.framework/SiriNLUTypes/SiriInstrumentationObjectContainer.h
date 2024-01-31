@class NSMutableArray, SISchemaInstrumentationMessage;

@interface SiriInstrumentationObjectContainer : NSObject

@property (retain, nonatomic) SISchemaInstrumentationMessage *mainItem;
@property (retain, nonatomic) NSMutableArray *tier1Events;

- (void).cxx_destruct;
- (void)addTier1Event:(id)a0;

@end
