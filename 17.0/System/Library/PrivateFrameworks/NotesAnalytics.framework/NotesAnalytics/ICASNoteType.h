@interface ICASNoteType : NSObject <AADataType>

@property (readonly, nonatomic) long long noteType;

- (id)toJsonValueAndReturnError:(id *)a0;
- (id)initWithNoteType:(long long)a0;

@end
