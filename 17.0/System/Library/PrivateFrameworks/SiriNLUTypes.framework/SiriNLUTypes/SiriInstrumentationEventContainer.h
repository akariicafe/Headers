@class NSArray, NLXSchemaNLXClientEvent;

@interface SiriInstrumentationEventContainer : NSObject

@property (retain, nonatomic) NLXSchemaNLXClientEvent *mainEvent;
@property (retain, nonatomic) NSArray *tier1Events;

- (void).cxx_destruct;

@end
