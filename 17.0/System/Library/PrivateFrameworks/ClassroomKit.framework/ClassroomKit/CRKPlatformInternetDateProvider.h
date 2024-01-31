@class NSString, NSMutableArray, NSDate;
@protocol CRKInternetDateFetching;

@interface CRKPlatformInternetDateProvider : NSObject <CRKInternetDateFetching>

@property (retain, nonatomic) id<CRKInternetDateFetching> dateFetchingProvider;
@property (retain, nonatomic) NSDate *internetDateAndTime;
@property (nonatomic) double uptimeAtInternetDateAndTimeFetch;
@property (retain, nonatomic) NSMutableArray *completionQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedProvider;

@end
