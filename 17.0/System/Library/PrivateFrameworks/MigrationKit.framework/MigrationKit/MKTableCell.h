@class NSFormatter, NSObject;

@interface MKTableCell : NSObject

@property (retain, nonatomic) NSObject *value;
@property (retain, nonatomic) NSFormatter *formatter;
@property (nonatomic) int columnSpan;
@property (nonatomic) long long alignment;

+ (id)cellWithValue:(id)a0 formatter:(id)a1;
+ (id)cellWithValue:(id)a0 formatter:(id)a1 alignment:(long long)a2;
+ (id)cellWithValue:(id)a0 formatter:(id)a1 columnSpan:(int)a2;
+ (id)cellWithValue:(id)a0 formatter:(id)a1 columnSpan:(int)a2 alignment:(long long)a3;

- (id)formattedValue;
- (void).cxx_destruct;

@end
