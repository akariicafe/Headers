@class NSString, NSArray, INImage;

@interface SFPeopleSuggestion : NSObject <SFPeopleSuggestion>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL isRestricted;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, copy, nonatomic) NSString *transportBundleIdentifier;
@property (readonly, copy, nonatomic) NSString *deviceModelIdentifier;
@property (readonly, copy, nonatomic) NSArray *contacts;
@property (readonly, copy, nonatomic) NSArray *formattedHandles;
@property (readonly, nonatomic) INImage *donatedImage;
@property (readonly, nonatomic) BOOL isGroup;
@property (readonly, nonatomic) BOOL isPlaceholder;
@property (readonly, nonatomic) BOOL isTapToRadar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)TTRPeopleSuggestion;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 displayName:(id)a1 transportBundleIdentifier:(id)a2 contact:(id)a3 deviceModelIdentifier:(id)a4;
- (id)initWithIdentifier:(id)a0 displayName:(id)a1 transportBundleIdentifier:(id)a2 contacts:(id)a3 formattedHandles:(id)a4 donatedImage:(id)a5 placeholder:(BOOL)a6;

@end
