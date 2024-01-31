@interface ICASFolderType : NSObject <AADataType>

@property (readonly, nonatomic) long long folderType;

- (id)toJsonValueAndReturnError:(id *)a0;
- (id)initWithFolderType:(long long)a0;

@end
