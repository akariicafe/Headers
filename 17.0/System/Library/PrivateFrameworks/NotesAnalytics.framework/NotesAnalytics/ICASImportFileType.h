@interface ICASImportFileType : NSObject <AADataType>

@property (readonly, nonatomic) long long importFileType;

- (id)toJsonValueAndReturnError:(id *)a0;
- (id)initWithImportFileType:(long long)a0;

@end
