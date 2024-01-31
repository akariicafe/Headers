@class NSURL, NSNumber, NSDictionary;

@interface APTapAction : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property long long actionType;
@property (retain) NSURL *actionURL;
@property double confirmedClickInterval;
@property (retain) NSNumber *adamIdentifier;
@property long long templateType;
@property (retain) NSDictionary *iTunesMetadata;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
