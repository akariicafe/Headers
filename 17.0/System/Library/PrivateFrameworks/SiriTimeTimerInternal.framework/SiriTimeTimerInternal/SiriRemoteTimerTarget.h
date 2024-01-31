@class NSString, NSArray;

@interface SiriRemoteTimerTarget : INObject

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, copy) NSString *deviceType;
@property (nonatomic, copy) NSArray *deviceNames;
@property (nonatomic, copy) NSArray *roomNames;

- (id)initWithIdentifier:(id)a0 displayString:(id)a1 pronunciationHint:(id)a2;
- (id)initWithCoder:(id)a0;

@end
