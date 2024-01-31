@class NSString;

@interface BLSXPCBacklightProxyObserverMask : NSObject <NSCopying, NSSecureCoding, BSXPCCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic, getter=isObservingDidCompleteUpdateToState) BOOL observingDidCompleteUpdateToState;
@property (readonly, nonatomic, getter=isObservingEventsArray) BOOL observingEventsArray;
@property (readonly, nonatomic, getter=isObservingDidChangeAlwaysOnEnabled) BOOL observingDidChangeAlwaysOnEnabled;
@property (readonly, nonatomic, getter=isObservingActivatingWithEvent) BOOL observingActivatingWithEvent;
@property (readonly, nonatomic, getter=isObservingDeactivatingWithEvent) BOOL observingDeactivatingWithEvent;
@property (readonly, nonatomic, getter=isObservingPerformingEvent) BOOL observingPerformingEvent;
@property (readonly, nonatomic, getter=isObserving) BOOL observing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)maskForObserver:(id)a0;
+ (id)maskForObservingDidCompleteUpdateToState:(BOOL)a0 observingEventsArray:(BOOL)a1 didChangeAlwaysOnEnabled:(BOOL)a2 activatingWithEvent:(BOOL)a3 deactivatingWithEvent:(BOOL)a4 performingEvent:(BOOL)a5;

- (void)encodeWithXPCDictionary:(id)a0;
- (id)initWithObserver:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithXPCDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithObservingDidCompleteUpdateToState:(BOOL)a0 observingEventsArray:(BOOL)a1 didChangeAlwaysOnEnabled:(BOOL)a2 activatingWithEvent:(BOOL)a3 deactivatingWithEvent:(BOOL)a4 performingEvent:(BOOL)a5;

@end
