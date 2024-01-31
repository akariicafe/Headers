@class CMSContentFailure, NSDictionary, CMSPlayerContext, NSURL, NSDate, NSString;

@interface CMSContentFailureRequest : NSObject <CMSCoding>

@property (retain, nonatomic) CMSContentFailure *contentFailure;
@property (retain, nonatomic) CMSPlayerContext *whilePlaying;
@property (retain, nonatomic) NSURL *previousContentURL;
@property (retain, nonatomic) NSURL *nextContentURL;
@property (retain, nonatomic) NSDictionary *userActivityDictionary;
@property (retain, nonatomic) NSDate *timestamp;
@property (retain, nonatomic) NSString *sessionIdentifier;
@property (retain, nonatomic) NSDictionary *constraints;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
