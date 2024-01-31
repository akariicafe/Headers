@class NSData, NSString, NSMutableArray;

@interface PQLFormatInjection : PQLNameInjectionBase <PQLInjecting> {
    NSMutableArray *_binds;
}

@property (readonly, nonatomic) NSData *sql;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)formatInjection:(id)a0;

@end
