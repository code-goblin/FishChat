//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBCoding.h"

@class NSString;

@interface MSEMessageMetaDataFailTaskItem : NSObject <PBCoding>
{
    NSString *sessionID;
    NSString *taskID;
}

+ (void)initialize;
@property(retain, nonatomic) NSString *taskID; // @synthesize taskID;
@property(retain, nonatomic) NSString *sessionID; // @synthesize sessionID;
- (void).cxx_destruct;
- (const map_0e718273 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

