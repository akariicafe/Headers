@class NSString;
@protocol NSSecureCoding, GCControllerPlayerIndicator, NSCopying, NSObject;

@interface GCLocalPlayerIndicator : NSObject <GCControllerPlayerIndicator>

@property (readonly, nonatomic) id<GCControllerPlayerIndicator> systemPlayerIndicatorProxy;
@property long long playerIndex;
@property (readonly) id<NSObject, NSCopying, NSSecureCoding> identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setController:(id)a0;
- (void).cxx_destruct;
- (id)initWithInitialValue:(long long)a0 systemPlayerIndicatorProxy:(id)a1;

@end
