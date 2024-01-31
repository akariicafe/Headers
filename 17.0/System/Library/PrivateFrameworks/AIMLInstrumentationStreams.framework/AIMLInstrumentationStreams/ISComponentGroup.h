@class NSArray, ISComponentIdentifier;

@interface ISComponentGroup : NSObject {
    void /* unknown type, empty encoding */ eventsInternal;
}

@property (nonatomic, readonly) NSArray *events;
@property (nonatomic, readonly) ISComponentIdentifier *componentIdentifier;

- (id)init;
- (void).cxx_destruct;
- (id)initWithEventsBridge:(id)a0;

@end
