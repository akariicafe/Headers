@class NSArray, MFMessageLoadingContext, MFMimePart, NSError, MFMimeBody, MFMailMessage;

@interface MFMessageLoadingContextEvent : NSObject

@property (weak, nonatomic) MFMessageLoadingContext *context;
@property (copy, nonatomic) NSArray *content;
@property (nonatomic) BOOL hasLoadedCompleteBody;
@property (nonatomic) BOOL hasLoadedBestAlternativePart;
@property (nonatomic) unsigned long long remainingBytes;
@property (nonatomic) long long transportType;
@property (retain, nonatomic) NSError *error;
@property (readonly, nonatomic) NSError *smimeError;
@property (retain, nonatomic) MFMimePart *loadedPart;
@property (retain, nonatomic) MFMimeBody *loadedBody;
@property (readonly, nonatomic) MFMailMessage *message;

- (id)description;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)_descriptionForDebugging:(BOOL)a0;

@end
