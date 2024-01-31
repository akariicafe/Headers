@class NSString, NSArray, GEOAlert;
@protocol GEOServerFormattedString, GEOTransitRoutingIncidentMessage;

@interface GEODirectionsError : NSObject <NSSecureCoding> {
    GEOAlert *_alert;
    struct GEOProblemDetail { int x0; int x1; struct { unsigned char x0 : 1; unsigned char x1 : 1; } x2; } *_problemDetails;
    unsigned long long _problemDetailsCount;
    id<GEOTransitRoutingIncidentMessage> _routingIncidentMessage;
}

@property (class, readonly, nonatomic) NSString *key;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) id<GEOServerFormattedString> title;
@property (readonly, nonatomic) id<GEOServerFormattedString> content;
@property (readonly, nonatomic) NSString *localizedTitle;
@property (readonly, nonatomic) NSString *localizedDescription;
@property (readonly, nonatomic) NSArray *internalServerErrors;
@property (readonly, nonatomic) id<GEOTransitRoutingIncidentMessage> incidentMessage;
@property (readonly, nonatomic) long long firstDirectionsErrorCode;

- (id)initWithResponse:(id)a0;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)_copyProblemDetails:(struct GEOProblemDetail { int x0; int x1; struct { unsigned char x0 : 1; unsigned char x1 : 1; } x2; } *)a0 count:(unsigned long long)a1;
- (BOOL)_errorCode:(long long)a0 toProblem:(out int *)a1;
- (long long)_errorCodeForProblemDetail:(struct GEOProblemDetail { int x0; int x1; struct { unsigned char x0 : 1; unsigned char x1 : 1; } x2; })a0;
- (BOOL)hasError:(long long)a0;
- (id)initWithWaypointIndex:(unsigned long long)a0;

@end
