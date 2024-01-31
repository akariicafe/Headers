@class NSString;

@interface QOSConfigInternal : NSObject {
    void /* unknown type, empty encoding */ locale;
    void /* unknown type, empty encoding */ issuesUrl;
    void /* unknown type, empty encoding */ locationUrl;
    void /* unknown type, empty encoding */ issueRefreshFrequencyInSecs;
    void /* unknown type, empty encoding */ locationRefreshFrequencyInSecs;
    void /* unknown type, empty encoding */ syncStartDelayOffsetInSecs;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ appTarget;
@property (nonatomic, readonly) NSString *locale;

- (id)init;
- (void).cxx_destruct;
- (id)initWithAppTarget:(long long)a0 locale:(id)a1;

@end
