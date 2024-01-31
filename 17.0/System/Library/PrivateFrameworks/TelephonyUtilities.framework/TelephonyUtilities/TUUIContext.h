@interface TUUIContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long inCallUIState;
@property (readonly, nonatomic, getter=isMicIndicatorVisible) BOOL isMicIndicatorVisible;
@property (readonly, nonatomic, getter=isFullScreen) BOOL fullScreen;

- (void)encodeWithCoder:(id)a0;
- (id)initWithState:(unsigned long long)a0;
- (id)initWithCoder:(id)a0;

@end
