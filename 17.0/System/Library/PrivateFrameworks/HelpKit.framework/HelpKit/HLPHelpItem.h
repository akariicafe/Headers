@class NSURL, NSString;

@interface HLPHelpItem : NSObject <NSCopying> {
    NSString *_decodedName;
}

@property (weak, nonatomic) HLPHelpItem *parent;
@property (nonatomic) long long serverType;
@property (nonatomic) long long level;
@property (copy, nonatomic) NSURL *iconURL;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *decodedName;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0 helpBookURL:(id)a1 serverType:(long long)a2;

@end
