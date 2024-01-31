@class NSString, NSMutableArray, VCSPropertyValue;

@interface VCSProperty : NSObject

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSMutableArray *values;
@property (readonly, nonatomic) VCSPropertyValue *singleValue;

- (void).cxx_destruct;
- (id)initWithName:(id)a0 value:(id)a1;
- (id)initClassificationProperty:(id)a0 withParseState:(id)a1 property:(const struct { long long x0; unsigned long long x1; unsigned long long x2; BOOL x3; id x4; } *)a2;
- (id)initEncodedTextProperty:(id)a0 withParseState:(id)a1 property:(const struct { long long x0; unsigned long long x1; unsigned long long x2; BOOL x3; id x4; } *)a2;
- (id)initISO8061DateListProperty:(id)a0 withParseState:(id)a1 property:(const struct { long long x0; unsigned long long x1; unsigned long long x2; BOOL x3; id x4; } *)a2;
- (id)initISO8061Property:(id)a0 withParseState:(id)a1 property:(const struct { long long x0; unsigned long long x1; unsigned long long x2; BOOL x3; id x4; } *)a2;
- (id)initIntProperty:(id)a0 withParseState:(id)a1 property:(const struct { long long x0; unsigned long long x1; unsigned long long x2; BOOL x3; id x4; } *)a2;
- (id)initKeywordListProperty:(id)a0 withParseState:(id)a1 property:(const struct { long long x0; unsigned long long x1; unsigned long long x2; BOOL x3; id x4; } *)a2;
- (id)initRFC822AddressProperty:(id)a0 withParseState:(id)a1 property:(const struct { long long x0; unsigned long long x1; unsigned long long x2; BOOL x3; id x4; } *)a2;
- (id)initRecurrenceProperty:(id)a0 withParseState:(id)a1 property:(const struct { long long x0; unsigned long long x1; unsigned long long x2; BOOL x3; id x4; } *)a2;
- (id)initStatusProperty:(id)a0 withParseState:(id)a1 property:(const struct { long long x0; unsigned long long x1; unsigned long long x2; BOOL x3; id x4; } *)a2;
- (id)initTranspProperty:(id)a0 withParseState:(id)a1 property:(const struct { long long x0; unsigned long long x1; unsigned long long x2; BOOL x3; id x4; } *)a2;
- (id)initURIProperty:(id)a0 withParseState:(id)a1 property:(const struct { long long x0; unsigned long long x1; unsigned long long x2; BOOL x3; id x4; } *)a2;
- (id)initWithName:(id)a0 rawValue:(id)a1 type:(unsigned long long)a2;
- (id)initWithName:(id)a0 rawValues:(id)a1 type:(unsigned long long)a2;
- (id)initWithName:(id)a0 values:(id)a1;
- (id)initWithVCSLine:(id)a0 parseState:(id)a1;

@end
