@class NSArray, NSDictionary, NSLocale, NSNumber;

@interface CHStrokeGroupQueryItem : NSObject {
    NSDictionary *__tokenizedTextResultsByLocale;
    NSDictionary *__errorsByLocale;
}

@property (readonly, nonatomic) NSNumber *strokeGroupIdentifier;
@property (readonly, nonatomic) NSNumber *strokeGroupStableIdentifier;
@property (readonly, copy, nonatomic) NSArray *strokeIdentifiers;
@property (readonly, nonatomic) long long strokeGroupType;
@property (readonly, copy, nonatomic) NSLocale *preferredLocale;

+ (id)descriptionForStrokeGroupQueryItemType:(long long)a0;

- (id)description;
- (void).cxx_destruct;
- (id)textRecognitionResultForLocale:(id)a0 error:(id *)a1;

@end
