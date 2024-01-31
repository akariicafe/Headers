@class NSString;

@interface CUIKUserActivityWithSource : CUIKUserActivity {
    long long _sourceType;
    NSString *_sourceHost;
    NSString *_sourceOwner;
}

- (id)initWithSource:(id)a0 type:(unsigned long long)a1;
- (id)dictionary;
- (BOOL)_requiresHostAndOwner;
- (BOOL)_supportsConsistentExternalIDAcrossDevices;
- (BOOL)_supportsConsistentExternalIDAcrossDevices:(long long)a0;
- (BOOL)_isLocalSource;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)isMatchForSource:(id)a0;
- (void).cxx_destruct;

@end
