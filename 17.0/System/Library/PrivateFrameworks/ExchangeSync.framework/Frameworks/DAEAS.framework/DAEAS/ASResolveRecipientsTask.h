@class NSArray, NSDate;

@interface ASResolveRecipientsTask : ASTask {
    NSArray *_emailAddresses;
}

@property (nonatomic) BOOL retrieveCertificates;
@property (nonatomic) BOOL retrieveAvailability;
@property (retain, nonatomic) NSDate *startTime;
@property (retain, nonatomic) NSDate *endTime;

- (id)requestBody;
- (void).cxx_destruct;
- (void)finishWithError:(id)a0;
- (BOOL)processContext:(id)a0;
- (id)_roundDownTo30MinuteBoundary:(id)a0;
- (id)_roundUpTo30MinuteBoundary:(id)a0;
- (long long)availabilityStatusForExchangeStatus:(int)a0;
- (long long)certStatusForExchangeStatus:(int)a0;
- (int)commandCode;
- (BOOL)getTopLevelToken:(char *)a0 outStatusCodePage:(char *)a1 outStatusToken:(char *)a2;
- (id)initForCertificatesWithEmailAddresses:(id)a0;
- (id)initFreeBusyQueryWithStartDate:(id)a0 endDate:(id)a1 emailAddresses:(id)a2;
- (long long)responseStatusForExchangeStatus:(int)a0;
- (long long)taskStatusForExchangeStatus:(int)a0;

@end
