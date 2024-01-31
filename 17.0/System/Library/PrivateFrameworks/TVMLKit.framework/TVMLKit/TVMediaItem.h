@class NSString, NSArray, NSURL, NSDictionary, NSNumber;
@protocol _TVSecureKeyLoading;

@interface TVMediaItem : NSObject

@property (retain, nonatomic) NSString *type;
@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subtitle;
@property (retain, nonatomic) NSString *itemDescription;
@property (retain, nonatomic) NSString *contentRatingDomain;
@property (retain, nonatomic) NSNumber *contentRatingRanking;
@property (retain, nonatomic) NSURL *artworkImageURL;
@property (nonatomic) BOOL containsExplicitContent;
@property (nonatomic) double resumeTime;
@property (retain, nonatomic) NSArray *interstitials;
@property (retain, nonatomic) NSArray *highlightGroups;
@property (retain, nonatomic) NSDictionary *userInfo;
@property (copy, nonatomic) NSString *contentRating;
@property (nonatomic) double contentProposalPresentationTime;
@property (nonatomic) double contentProposalAutomaticAcceptanceInterval;
@property (copy, nonatomic) NSString *externalIdentifier;
@property (copy, nonatomic) NSString *externalContentIdentifier;
@property (copy, nonatomic) NSString *externalProfileIdentifier;
@property (copy, nonatomic) NSString *externalServiceIdentifier;
@property (copy, nonatomic) NSNumber *playbackProgress;
@property (retain, nonatomic) id<_TVSecureKeyLoading> secureKeyLoader;

- (void).cxx_destruct;

@end
