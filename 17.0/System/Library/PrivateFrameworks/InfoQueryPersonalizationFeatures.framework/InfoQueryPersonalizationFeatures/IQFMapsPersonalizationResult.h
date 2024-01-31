@class NSString, NSNumber, NSDate;

@interface IQFMapsPersonalizationResult : NSObject <NSSecureCoding> {
    NSNumber *_score;
    NSNumber *_isCandidateForPromotion;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSString *muid;
@property unsigned long long resultType;
@property (retain) NSString *eventName;
@property (retain) NSDate *startEventDate;
@property (retain) NSDate *endEventDate;
@property (retain) NSString *terminal;
@property (retain) NSString *flightCode;
@property (retain) NSString *ticketNumber;
@property (retain) NSNumber *numberOfVisits;
@property (retain) NSNumber *numberOfVisitsGivenLocation;
@property (retain) NSDate *dateOfLastVisit;
@property (retain) NSNumber *numberOfGuests;
@property (retain) NSNumber *entityRelevanceScore;

- (double)score;
- (void)encodeWithCoder:(id)a0;
- (void)setScore:(double)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)_score;
- (id)_isCandidateForPromotion;
- (id)initWithMUID:(id)a0 resultType:(unsigned long long)a1 eventName:(id)a2 startEventDate:(id)a3 endEventDate:(id)a4 terminal:(id)a5 flightCode:(id)a6 ticketNumber:(id)a7 numberOfVisits:(id)a8 dateOfLastVisit:(id)a9 numberOfGuests:(id)a10;
- (id)initWithMUID:(id)a0 resultType:(unsigned long long)a1 eventName:(id)a2 startEventDate:(id)a3 endEventDate:(id)a4 terminal:(id)a5 flightCode:(id)a6 ticketNumber:(id)a7 numberOfVisits:(id)a8 numberOfVisitsGivenLocation:(id)a9 dateOfLastVisit:(id)a10 entityRelevanceScore:(id)a11 numberOfGuests:(id)a12;
- (BOOL)isCandidateForPromotion;
- (void)setIsCandidateForPromotion:(BOOL)a0;

@end
