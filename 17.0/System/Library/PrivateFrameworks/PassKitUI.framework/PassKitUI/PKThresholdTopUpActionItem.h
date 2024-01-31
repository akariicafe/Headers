@class NSString;
@protocol NSCopying;

@interface PKThresholdTopUpActionItem : NSObject <PKIdentifiable> {
    NSString *_identifier;
}

@property (readonly, nonatomic) id<NSCopying> identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithIdentifier:(id)a0;
- (void).cxx_destruct;

@end
