@class NSString, NSArray, GEOPBTransitIncident, NSDate;

@interface _GEOTransitIncident : NSObject <GEOTransitIncident, NSSecureCoding> {
    GEOPBTransitIncident *_incident;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long muid;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *summary;
@property (readonly, nonatomic) NSString *fullDescription;
@property (readonly, nonatomic) NSString *messageForRoutePlanning;
@property (readonly, nonatomic) NSString *messageForRouteStepping;
@property (readonly, nonatomic) NSString *messageForNonRoutable;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) int iconType;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) NSDate *lastUpdated;
@property (readonly, nonatomic, getter=isBlockingIncident) BOOL blockingIncident;
@property (readonly, nonatomic) NSArray *affectedEntities;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIncident:(id)a0;

@end
