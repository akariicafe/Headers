@protocol MTAccountEventHandlerDelegate;

@interface MTAccountEventHandler : MTStandardEventHandler

@property (weak, nonatomic) id<MTAccountEventHandlerDelegate> delegate;

- (id)eventType;
- (id)knownFields;
- (id)eventVersion:(id)a0;
- (id)type:(id)a0;

@end
