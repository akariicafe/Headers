@protocol MTEnterEventHandlerDelegate;

@interface MTEnterEventHandler : MTStandardEventHandler

@property (weak, nonatomic) id<MTEnterEventHandlerDelegate> delegate;

- (id)eventType;
- (id)knownFields;
- (id)eventVersion:(id)a0;
- (id)osLanguages:(id)a0;

@end
