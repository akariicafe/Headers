@class NSString, EKParticipant;

@interface EKParticipantForSorting : NSObject <NSCopying> {
    EKParticipant *_participant;
}

@property (copy, nonatomic) NSString *firstName;
@property (copy, nonatomic) NSString *lastName;
@property (copy, nonatomic) NSString *cachedDisplayName;
@property (nonatomic) BOOL isEmail;
@property (nonatomic) BOOL isPhone;

+ (id)_cache;
+ (id)participantForSortingWithEKParticipant:(id)a0;
+ (id)participantsForSortingWithEKParticipants:(id)a0;

- (long long)compare:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)participant;
- (id)displayName;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)compareByContactNames:(id)a0;
- (long long)compareByEmailThenByContactName:(id)a0;
- (BOOL)participantIsOptional:(id)a0;

@end
